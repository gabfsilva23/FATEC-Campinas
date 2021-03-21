
<?php

// 22) Escreva um programa que leia 10 números do usuário
//  e calcule a multiplicação desses números. 
//  Utilize o comando de repetição Para (For) 

$numero2=1;

for($cont=0;$cont<10;$cont++){

    echo "insira um número: ";
    $numero1=(int)fgets(STDIN);

    $numero2*= $numero1;

    echo "Repetição $cont , multiplicação $numero2 \n";
    }
    
    $media=$numero2/10;
    echo "Media: $media";

?>