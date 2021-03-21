
<?php

    // //7) Crie um programa que leia as variáveis inteiras x e y
    //  e troque o valor destas variáveis.
    //  Isto é, x deve ficar com o valor de y 
    //  e y deve ficar com o valor de x. 
    //  Mostre os valores depois da troca 

    echo "Insira um valor para x:\n ";
    $x=fgets(STDIN);
    echo "Insira um valor para y:\n ";
    $y=fgets(STDIN);
    
    $aux= $x;
    $x=$y;
    $y=$aux;

    echo "\n X $x, Y $y";

    
?>