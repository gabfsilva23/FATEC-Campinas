
<?php

// 15) Faça um programa que calcula o valor a ser pago de estadia
// em um hotel. Há preços diferentes de acordo com o quarto escolhido.
// O usuário deve primeiramente informar o tipo do quarto. 
// Depois se o cálculo será feito em horas ou em dias. 
// Por fim, informar quantas horas ou quantos dias permaneceu no local. 
// O valor é calculado de acordo com a tabela abaixo: 
// Considere o período de até 6 horas como pernoite.
 
// TIPO    PREÇO/PERNOITE PREÇO/DIA  
// 1. Suite   R$ 30,00   R$ 60,00  
// 2. Suite Master  R$ 50,00   R$ 90,00  
// 3. Suite Mega Blaster R$ 80,00   R$ 140,00 

echo "Qual tipo de suite ? Tipo/Pernoite / Dia\n";
echo "1. Suite   R$ 30,00   R$ 60,00 \n"; 
echo " 2. Suite Master  R$ 50,00   R$ 90,00 \n";
echo " 3. Suite Mega Blaster R$ 80,00   R$ 140,00 \n";
$suite=chop(fgets(STDIN));

$tipotempo=readline("Digite 'h' para calcular horas\n Digite 'd' para calcular em dias\n");

// echo "Para calculo em horas, insira 'h'\n";
// echo "Para calculo em dias, insira 'd'\n";
// $tipotempo= (float) fgets(STDIN);


if($tipotempo == 'h' or $tipotempo =='H'){
    echo "Quantas horas ?\n";
    $tempo= (float) fgets(STDIN);

    switch($suite){
        case 1:
            $total=30*$tempo;
            break;

        case 2:
            $total=50*$tempo;
            break;

        case 3:
            $total=80*$tempo;
            break;

        default:
            echo 'Escolha uma suite válida';
            break;

    }}

if($tipotempo == 'd' or $tipotempo =='D')
{
    echo "Quantos dias ?";
    $tempo= (float) fgets(STDIN);

    switch($suite){
        case 1:
            $total=60*$tempo;
            break;
    
        case 2:
            $total=90*$tempo;
            break;
    
        case 3:
            $total=140*$tempo;
            break;
    
        default:
             echo 'Escolha uma suite válida';
            break;
    
        }} 
    
     echo " Suite utilizada: $suite \n Tipo do Tempo $tipotempo\n  Total tempo $tempo\n Total a pagar $total";
?>