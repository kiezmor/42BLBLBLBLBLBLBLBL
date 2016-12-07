!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
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
		<?php
		include('connect.php');
		if (!isset($_FILES['image']['tmp_name'])) {
		echo "";
		}else{
		$file=$_FILES['image']['tmp_name'];
		$image= addslashes(file_get_contents($_FILES['image']['tmp_name']));
		$image_name= addslashes($_FILES['image']['name']);
			
			move_uploaded_file($_FILES["image"]["tmp_name"],"../images/imgprofil/" . $_FILES["image"]["name"]);
			
			$location="../images/imgprofil/" . $_FILES["image"]["name"];

			$save=mysql_query("UPDATE user SET location=('$location') WHERE username=('$username')");
			header("location: profil.php");
			exit();					
			}
		?>
		</div>
	</div>
		<?php include("footer.php"); ?>
</body>
</html>
