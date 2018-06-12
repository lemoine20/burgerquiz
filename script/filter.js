var filter = document.getElementById("filter");
var pseudo = document.getElementById("pseudoInput");
var theme = document.getElementById("themeInput");
var min = document.getElementById("minInput");
var max = document.getElementById("maxInput");
filter.onchange = ()=>{
	pseudo.style.display = "none";
	theme.style.display = "none";
	min.style.display = "none";
	max.style.display = "none";
	if(filter.value == "pseudo")
		pseudo.style.display = "inline";
	else if(filter.value == "theme")
		theme.style.display = "inline";
	else if(filter.value == "rank" || filter.value == "score" || filter.value == "temps"){
		min.style.display = "inline";
		max.style.display = "inline";
	}
};