<?php
if(isset($_POST['submit'])) 
{

$message=
'Nom:	'.$_POST['fullname'].'<br />
Sujet:	'.$_POST['subject'].'<br />
Telephone:	'.$_POST['phone'].'<br />
Email:	'.$_POST['emailid'].'<br />
Commentaire:	'.$_POST['comments'].'<br />
Merci '.$_POST['fullname'].', de nous avoir contact&eacute;.
';
    require "phpmailer/class.phpmailer.php";

    $mail = new PHPMailer();  

    $mail->IsSMTP();                
    $mail->SMTPAuth = true;         
    $mail->SMTPSecure = "ssl";      
    $mail->Host = "smtp.gmail.com"; 
    $mail->Port = 465;
    $mail->Encoding = '7bit';
    
    $mail->Username   = "mailsender6300@gmail.com";
    $mail->Password   = "mailsender60"; 
      
    $mail->SetFrom($_POST['emailid'], $_POST['fullname']);
    $mail->AddReplyTo($_POST['emailid'], $_POST['fullname']);
    $mail->Subject = "Numerichip";     
    $mail->MsgHTML($message);
 
    $mail->AddAddress("kiezmor60@gmail.com", "Recipient Name");
	$mail->AddAddress($_POST['emailid']);
    $result = $mail->Send();	
	$message = $result ? 'Envoie r&eacute;ussie!' : 'Echec de l&prime;envoie !';      
	unset($mail);

}
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<link rel="shortcut icon" type="image/ico" href="images/icon.ico">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Numerichip - Contact</title>
<link href="style.css" rel="stylesheet" type="text/css" />
<?php include("header2.php"); ?>
</head>
<body>
<div class="container">
<div class="content">
<div>
	<div>
	</br>
	<p>Les horairs : Mardi au Samedi de 10 heure à 19 heures.</p>
	<p>Contactez-nous soit par email, soit par téléphone : <ul><li> 03 23 60 03 58 </li> <li> 06 70 74 21 92 </li></ul></p>
	</div>
    <div class="ic">
    <h3>Email :</h3>
	<form name="form1" id="form1" action="" method="post">
			<input type="text" size="30" name="fullname" placeholder="Nom Prenom" />
			<br />
			<input type="text" size="30" name="subject" placeholder="Sujet" />
			<br />
			<input type="text" size="30" name="phone" placeholder="Telephone" />
			<br />
			<input type="text" size="30" name="emailid" placeholder="Email" />
			<br />
			<textarea rows="7" cols="40" class="msg" name="comments" placeholder="Message"></textarea>
			<br />
			<input type="submit" name="submit" value="Envoie" />
	</form>
	<p><?php if(!empty($message)) echo $message; ?></p>
	</div>
</div>
</div>
</div>
<?php include("footer.php"); ?>
</body>
</html>