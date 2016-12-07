<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<link rel="shortcut icon" type="image/ico" href="images/icon.ico">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Numerichip - Samsung</title>
<link href="style.css" rel="stylesheet" type="text/css" />
<?php include("header2.php"); ?>
</head>
<body>
<div class="container">
<div class="content">
	<?php 	
        ini_set('display_errors','off');
    	require "connect.php";   
    	$sql="SELECT * FROM phone WHERE phone= 2 OR phone = 3 ORDER BY idl";
   		$req= mysql_query($sql) or die ('erreur sql!<br/>'.$sql.'<br/>'.mysql_error());
    			while($data=mysql_fetch_assoc($req))
    	{
			echo '<a>'.$data['modele'].'</a>';
			echo '<p> <img src="'.$data['img'].'"> '.$data['title'].' '.$data['price'].'</p>';
		}
	?>
</div>
</div>
<?php include("footer.php"); ?>
</body>
</html>