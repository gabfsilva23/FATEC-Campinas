
<?php

//24) Escreva um programa que leia um número qualquer 
// do usuário e escreva os ímpares existentes entre 1 
// e o número informado pelo usuário


echo "\ninsira uma número inteiro positivo: ";
$numero1=(int)fgets(STDIN);

for($cont=0;$cont<$numero1;$cont++){

    $numero2 = $numero1 - $cont;

    if($numero2 % 2 == 0){
        
    } 
    else {
        echo "$numero2 ";
    }

}
?>