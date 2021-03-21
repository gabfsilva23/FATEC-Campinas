
<?php

// 25) Escreva um programa que leia o ano de nascimento de uma pessoa 
// e apresente uma linha do tempo, mostrando cada ano de vida da pessoa 
// e quantos anos ela tinha em cada ano até o ano atual

echo "\ninsira um ano de nascimento: ";
$ano1=(int)fgets(STDIN);

echo "\ninsira o ano atual: ";
$ano2=(int)fgets(STDIN);

$idade = $ano2 - $ano1;

for($cont=0;$cont<=$idade;$cont++){


    echo "Em $ano1 ciclana tinha $cont anos.\n";
    $ano1++;

}
?>