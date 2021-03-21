
<?php

// //9) Sabendo-se que um veículo faz 12km/lt. Faça um programa
//  que calcule a média de consumo de combustível de um veículo.
//   O usuário deve informar o KM inicial (ex. 12500 km), o 
//   KM final (ex. 12700 km) e quantos litros foram gastos no 
//   percurso .

echo "Insira km inicial: ";
$kmin=chop(fgets(STDIN));

echo "Insira km final: ";
$kmfin=chop(fgets(STDIN));

$kmcorrido= $kmin - $kmfin;

$litros= $kmcorrido/12;

echo " Litros gastos (12km/lt): $litros\n";

?>