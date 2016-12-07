<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<link href="style.css" rel="stylesheet" type="text/css" />
<link rel="shortcut icon" type="image/ico" href="../images/icon.ico">
<?php include("header2.php"); ?>
<title>Profil - <?php echo $username; ?></title>
</head>
<body>
	<div class="container">
		<div class="content">
		<?php include("widget_bar.php"); ?>
		<center><h1>Edit profil</h1></center>

		<form class ="eedit" action="addexec.php" method="post" enctype="multipart/form-data" name="addroom">
		<p>Photo de profil actuelle</br>
 		Image a upload(taille recommander 200 * 200) : </p>
 		<input type="file" name="image" class="ed"><br />
 		<input type="submit" name="Submit" value="Upload" id="button1" />
 		</form>
		<?php
		include('config.php');
		$result = mysql_query("SELECT * FROM user WHERE username=('$username')");
		while($row = mysql_fetch_array($result))
		{
		echo '<p><img class="profil" src="'.$row['location'].'"></p>';
		}
		?>
		</div>
	</div>
		<?php include("footer.php"); ?>
</body>
</html>