<?php
$host = 'localhost'; 
$login = 'root';
$pass = '';
$base = 'numerichip';

$cnx = mysql_connect ($host, $login, $pass) or die (mysql_error ());
$ret = mysql_select_db ($base) or die (mysql_error ());
?>