
<?php

// Faça um programa que calcule o valor a ser pago por uma 
// dívida em atraso. O usuário deve informar o valor original
//  da dívida (ex. R$ 50,00), a quantidade de dias em atraso
//   (ex. 35 dias) e o percentual da multa por dia de atraso 
//   (ex. 1%)  

echo "Insira um valor :";
$valor=chop(fgets(STDIN));

echo "Insira a quantidade de dias: ";
$dias=chop(fgets(STDIN));

echo "Insira a % de multa para calculo: ";
$porcent=chop(fgets(STDIN));

$valor2 = (((($porcent / 100)* $valor)*$dias)+$valor);

echo "Valor: $valor\n Dias corridos $dias \n Porcentagem de cálculo: $porcent\n Novo total: $valor2;"

?>