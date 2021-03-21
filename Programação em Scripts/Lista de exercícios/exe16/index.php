
<?php

// //16) Usando a estrutura Switch, escreva um programa que leia
// um número inteiro (de 1 a 7) representando o dia da semana e 
// informe o nome do dia correspondente.


echo "Insira um número para um respectivo dia da semana\n ";
echo "1-7\n";
$dia=chop(fgets(STDIN));

switch($dia){
    case 1:
        echo 'Segunda-feira';
    break;

    case 2:
        echo 'Terça-feira';
    break;

    case 3:
        echo 'Quarta-feira';
    break;

    case 4:
        echo 'Quinta-feira';
    break;

    case 5:
        echo 'Sexta-feira';
    break;

    case 6:
        echo 'Sábado';
    break;

    case 7:
        echo 'Domingo';
    break;
    
    default:
        echo 'Não é um dia da semana';
    break;
}



?>