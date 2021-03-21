
<?php

// 4) Crie um programa que leia um número na tela,
//  mostra seus 2 sucessores e 2 antecessores.  

echo "Insira um número inteiro: ";
$num=fgets(STDIN);

$num1=($num-1);
$num2=($num-2);
$num3=($num+1);
$num4=($num+2);

echo "Número inserido: $num\n Anteriores: $num1, $num2\n Posteriores: $num3, $num4";

?>