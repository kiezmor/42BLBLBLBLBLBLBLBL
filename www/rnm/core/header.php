<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<link rel="stylesheet" href="style.css">
				    	<div class="header">
                        <div class="logo"><a href="index.php"><img src="images/rnm.png" alt="rnm"></a></div>
                        <div class="login">
                        <?php
						ini_set('display_errors','off');
						session_start();
						require('connect.php');
						if (isset($_POST['username']) and isset($_POST['password'])){
						$username = $_POST['username'];
						$pass_hache = sha1($_POST['password']);
						$query = "SELECT * FROM `user` WHERE username='$username' and password='$pass_hache'";
						$result = mysql_query($query) or die(mysql_error());
						$count = mysql_num_rows($result);
						if ($count == 1){
						$_SESSION['username'] = $username;
						}else{
						echo "Invalid Login Credentials.";
						}
						}
						if (isset($_SESSION['username'])){
						$username = $_SESSION['username'];
						echo "Hey " . $username . " ";
						echo ", bienvenue a toi!";
						echo " <a href='core/profil.php'>Mon profil</a>";
						echo " <a href='core/logout.php'>Logout</a>";
						}else{
						?>
                        <form action="" method="POST">
    					<p><input id="username" type="text" name="username" placeholder="username" />
	 					<input id="password" type="password" name="password" placeholder="password" /></p>
    					<a class="btn" href="core/register.php">Signup</a>
   						<input class="btn register" type="submit" name="submit" value="Login" />
   						</form>
                        <?php } ?>
                        </div>
						</div>
<ul id="menu-deroulant">
	<li><a href="core/stream.php">Stream</a>
		<ul>
            <li><a href="core/neji.php">Neji</a></li>
            <li><a href="core/kiez.php">Kiezmor</a></li>
			<li><a href="core/malla.php">Mallazar</a></li>
		</ul>
	</li>
	<li><a href="#">Divers</a>
		<ul>
            <li><a href="#">Nos vid&#xE9;os</a></li>
            <li><a href="#">Production</a></li>			
		</ul>
	</li>
    <li><a href="#">Contact</a></li>
    <li><a href="#">DO IT !</a></li>
</ul>
</html>