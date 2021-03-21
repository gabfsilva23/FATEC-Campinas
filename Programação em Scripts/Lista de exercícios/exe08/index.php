
<?php

// // Faça um programa que solicite ao usuário o 
// valor do litro de combustível (ex. 4,19) 
// e qual valor ele deseja abastecer (ex. 50,00). 
// Calcule quantos litros de combustível 
// o usuário obterá com esses valores.

echo "Insira o preço por litro:  ";
$valor=fgets(STDIN);

echo "Insira o valor desejado:  ";
$volume=fgets(STDIN);

$volumetotal= $volume/$valor;



echo "Valor do combustível: $valor\n Valor desejado: $volume\n Volume total (litros): $volumetotal";

?>