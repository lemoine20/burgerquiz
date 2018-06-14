var video = document.getElementById("intro-game");
var progress = document.getElementById("progress");
var count = 0;
var total = questions.length*(questions[0].length-2);
var timer = document.getElementById("timer");
var startingDate;
var proposition = document.getElementById("proposition");
var propositions;
var question = document.getElementById("question");
var label1 = document.getElementById("label1");
var label2 = document.getElementById("label2");
var both = document.getElementById("both");
var countdown = document.getElementById("countdown");
var beep = new Audio('res/beep.mp3');
var go = new Audio('res/go.mp3');
var index = 0;
var speech = new SpeechSynthesisUtterance();
speech.rate = 1.6;
speech.pitch = 1.5;
speech.lang = "fr";
speech.onend = playIntro;
//Text to speech isn't available to every browser
speech.onerror = ()=>{
	setTimeout(speech.onend,2000);
};
nextQuestion();
var reponses = [];

function playIntro(){
	question.style.display = "none";
	video.style.display = "block";
	video.play();
	video.onended = startCountdown;
	//auto-play can be forbidden depending on those conditions: https://goo.gl/xX8pDD 
	if(document.getElementById("intro").paused)
		video.onended();
}

function startCountdown(){
	video.style.display = "none";
	countdown.style.display = "block";
	for(i = 0; i < 5; i++){
		let n = 3-i;
		setTimeout(()=>{
			if(n == -1){
				countdown.style.display = "none";
				proposition.style.display = "block";
				question.style.display = "block";
				label1.classList.add("grow");
				label1.onclick = ()=>{
					reponses.push(1);
					nextProposition();
				};
				label2.classList.add("grow");
				label2.onclick = ()=>{
					reponses.push(2);
					nextProposition();
				};
				both.classList.add("grow");
				both.onclick = ()=>{
					reponses.push(3);
					nextProposition();
				};
				speech.onend = nextProposition;
				nextProposition();
				startingDate = new Date();
				timer.innerHTML = "00:00";
				setInterval(()=>{
					timer.innerHTML = new Date(new Date() - startingDate).toLocaleTimeString().substr(3);
				},1000);
				return;
			}
			if(n == 0)
				go.play();
			else
				beep.play();
			countdown.classList.remove("enter");
			void countdown.offsetWidth;
			countdown.className = ["green", "yellow", "orange", "red"][n]+ " enter inv";
			countdown.innerHTML = (n==0 ? "GO" : n);
		},i*1100);
	}
}

function nextQuestion(){
	if(questions.length == 0){
		endGame();
		return false;
	}
	let current = questions.pop();
	label1.innerHTML = current[0];
	label2.innerHTML = current[1];
	speech.text = current[0]+","+current[1]+" ou les deux ?";
	speechSynthesis.speak(speech);
	propositions = current.splice(2);
	return true;
}

function nextProposition(){
	if(propositions.length == 0){
		if(nextQuestion())
			nextProposition();
		return;
	}
	let current = propositions.pop();
	proposition.innerHTML = current;
	progress.innerHTML = (++count) + "/" + total;
}

function endGame(){
	window.location.href = "index.php?do=finish&answers=" + reponses.join("");
}