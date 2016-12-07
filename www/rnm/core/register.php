<?php
	ini_set('display_errors','off');

	require('connect.php');
    if (isset($_POST['username']) && isset($_POST['password'])){
        $username = $_POST['username'];
		$email = $_POST['email'];
		$pass_hache = sha1($_POST['password']);
        $query = "INSERT INTO `user` (username, password, email, date_inscription) VALUES ('$username', '$pass_hache', '$email', CURDATE())";
        $result = mysql_query($query);
        if($result){
            $msg = "User Created Successfully.";
        }
    }
    ?>
<!DOCTYPE html>
<html>
<head>
<title>Inscription - RNM</title>
<link rel="shortcut icon" type="image/ico" href="../images/icon.ico">
<link rel="stylesheet" type="text/css" href="style.css" />
</head>
<body>
    <!-- Form for logging in the users -->
<div class="register-form">
<?php
	if(isset($msg) & !empty($msg)){
		echo $msg;
	}
 ?>
<h1>Register</h1>
<form action="" method="POST">
    <p><label>Pseudo : </label>
	<input id="username" type="text" name="username" placeholder="username" /></p>
	
	<p><label>E-Mail&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; : </label>
	 <input id="password" type="email" name="email" required placeholder="email@email.com" /></p>
 
     <p><label>Mot de passe&nbsp;&nbsp; : </label>
	 <input id="password" type="password" name="password" placeholder="password" /></p>
 
    <a class="btn" href="../index.php">Login</a>
    <input class="btn register" type="submit" name="submit" value="Register" />
    </form>
</div>
</body>
</html>