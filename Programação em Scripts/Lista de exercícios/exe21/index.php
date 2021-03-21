
<?php

// 21) Escreva um programa que leia 10 números do usuário
//  e calcule a média desses números. 
//  Utilize o comando de repetição Repita (Do...While) 

$contador=0;
$numero2=0;

do{
echo "\ninsira um número: ";
$numero1=(int)fgets(STDIN);


$numero2 +=  $numero1;

echo "Volta $contador  Número :$numero2";

$contador++;

}while($contador<10);

$media = ($numero2/10);
echo "\nmédia: $media";

?>