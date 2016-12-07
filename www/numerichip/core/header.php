<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<div class="header">
<div class="logo"><a href="index.php"><img src="images/rnm.png" alt="numerichip"></a></div>
</div>
<ul id="menu-deroulant">
	<li><a class="m" href="core/samsung.php">Samsung</a>
		<ul>
			<?php 	
            	ini_set('display_errors','off');
    			require "core/connect.php";   
    			$sql="SELECT * FROM phone WHERE phone=(2) ORDER BY modele";
   				$req= mysql_query($sql) or die ('erreur sql!<br/>'.$sql.'<br/>'.mysql_error());
    			while($data=mysql_fetch_assoc($req))
    			{
					echo '<li><a href="#">'.$data['modele'].' </a></li>';
				}
			?>
		</ul>
	</li>
	<li><a class="m" href="core/apple.php">Apple</a>
		<ul>
            <?php 	
            	ini_set('display_errors','off');
    			require "core/connect.php";   
    			$sql="SELECT * FROM phone WHERE phone=(1) ORDER BY modele";
   				$req= mysql_query($sql) or die ('erreur sql!<br/>'.$sql.'<br/>'.mysql_error());
    			while($data=mysql_fetch_assoc($req))
    			{
					echo '<li><a href="#">'.$data['modele'].' </a></li>';
				}
			?>		
		</ul>
	</li>
    <li><a class="m" href="core/autres.php">Autres</a></li>
    <li><a class="m" href="core/accessoires.php">Accessoires</a></li>
    <li><a class="m" href="core/contact.php">Contact</a></li>
</ul>
</html>