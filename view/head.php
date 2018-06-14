<head>
	<meta charset="utf-8">
	<link rel="icon" href="res/favicon.ico" type="image/x-icon"/>
	<!--<meta name="viewport" content="width=device-width, initial-scale=1"/>-->
	
	<title>Burger Quiz Online</title>
	<link rel="stylesheet" href="style/style.css"></link>
	
	<script>
		if ((function (){ua=navigator.userAgent;var is_ie=ua.indexOf("MSIE ")>-1||ua.indexOf("Trident/") > -1;return is_ie;})())
			alert("Incompatible with Internet Explorer.");
		var fail = <?php echo '"'.$fail.'"'?>;
		if(fail)
			alert(fail);
	</script>
</head>