function sub(){
	var usr = document.getElementById('usr');
	var pwd = document.getElementById('pwd');
	var pwdv = document.getElementById('pwdv');
	var mail = document.getElementById('mail');
	var b = true;
	
	usr.style.border = "inset";
	pwd.style.border = "inset";
	pwdv.style.border = "inset";
	mail.style.border = "inset";
	
	if(usr.value == ''){
		usr.style.border = "solid red";
		b = false;
	}
	if(pwd.value == ''){
		pwd.style.border = "solid red";
		pwdv.style.border = "solid red";
		b = false;
	}
	if(pwdv.value != pwd.value){
		pwdv.style.border = "solid red";
		b = false;
	}
	if(mail.value == ''){
		mail.style.border = "solid red";
		b = false;
	}
	return b;
}

function login(){
	var usr = document.getElementById('usr');
	var pwd = document.getElementById('pwd');
	var b = true;
	
	usr.style.border = "inset";
	pwd.style.border = "inset";
	
	if(usr.value == ''){
		usr.style.border = "solid red";
		b = false;
	}
	if(pwd.value == ''){
		pwd.style.border = "solid red";
		b = false;
	}
	return b;
}