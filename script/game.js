var video = document.getElementById("intro");
var question = document.getElementById("question");
var countdown = document.getElementById("countdown");
var beep = new Audio('res/beep.mp3');
var go = new Audio('res/go.mp3');
var msg = new SpeechSynthesisUtterance('Bernard Tapie, un tapis, ou les deux ?');
msg.rate = 1.6;
msg.pitch = 1.5;
msg.lang = "fr";
msg.onend = ()=>{
	question.style.display = "none";
	video.style.display = "block";
	video.play();
	video.onended = ()=>{
		video.style.display = "none";
		countdown.style.display = "block";
		for(i = 0; i < 5; i++){
			let n = 3-i;
			setTimeout(()=>{
				if(n == -1){
					countdown.style.display = "none";
					return;
				}
				if(n == 0)
					go.play();
				else
					beep.play();
				countdown.classList.remove("enter");
				void countdown.offsetWidth;
				countdown.classList.add("enter");
				countdown.style.color = ["lime", "yellow", "orange", "red"][n];
				countdown.innerHTML = (n==0 ? "GO" : n);
			},i*1100);
		}
	};
	//auto-play can be forbidden depending on those conditions: https://goo.gl/xX8pDD 
	if(document.getElementById("intro").paused)
		video.onended();
};
//Text to speech isn't available to every browser...
msg.onerror = ()=>{
	setTimeout(msg.onend,2000);
};
speechSynthesis.speak(msg);