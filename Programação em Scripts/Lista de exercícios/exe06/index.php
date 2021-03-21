
<?php

// // 6) Crie um programa que lê um número real em dólar, 
// e converte o valor para reais. 
// Considere que a cotação é US$ 1 = R$ 5,47.  

echo "Digite um valor (US$): ";
$dolar=fgets(STDIN);

$convert= 5.47;

$real= $dolar*$convert;

echo " R$ $real";

?>