<?php 
ini_set('display_errors','off');
session_start();
session_destroy();
?>
<!DOCTYPE html>
	<head>
		<title>Deconnexion - RNM</title>
		<link href="style.css" rel="stylesheet"/>
        <?php include("header2.php"); ?>
	</head>
	<body>
    <?php include("widget_bar.php"); ?>
		<div class="container">
        <center>
        	<div id="progressbar">
            	<span id="indicator"></span>
            </div>
            <p>Vous allez 	&ecirc;tre rediriger ...</p>
        </center>
        </div>
        <?php include("footer.php"); ?>
	</body>
</html>

<script>  
var maxprogress = 400;
var actualprogress = 0;
var itv = setInterval(prog, 10);
function prog()
{
  if(actualprogress >= maxprogress) 
  {
    clearInterval(itv);
	document.location.href="../index.php" 
    return;
  }	
  var progressnum = document.getElementById("progressnum");
  var indicator = document.getElementById("indicator");
  actualprogress += 1;	
  indicator.style.width=actualprogress + "px";
  progressnum.innerHTML = (maxprogress - actualprogress) + " secondes restantes";
}
</script> 