<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<link href="style.css" rel="stylesheet" type="text/css" />
<link rel="shortcut icon" type="image/ico" href="../images/icon.ico">
	<?php include("header2.php"); ?>
	<title>Liste utilisateur - RNM</title>
</head>
<body>
	<div class="container">
		<div class="content">
		<?php include("widget_bar.php"); ?>
		<?php
			$reponse = mysql_query("SELECT * FROM user");
			$donnees = mysql_fetch_array($reponse);

			echo '<img class="profil" src="'.$donnees['location'].'">';
			echo "<p class='iprof'>" . $donnees['username'] . " </br>";
			echo "</br>Date d'insciption : " . $donnees['date_inscription'] . "</br></p>";
			mysql_close();
		?>
		</div>
	</div>
		<?php include("footer.php"); ?>
</body>
</html>