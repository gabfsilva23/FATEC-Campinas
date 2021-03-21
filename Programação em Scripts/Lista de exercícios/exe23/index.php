
<?php

// 23) Escreva um programa que leia o nome e a idade
//  de 10 pessoas e exiba: o nome e a idade da pessoa mais nova.


//O PROGRAMA ACUSA ERRO, MAS RODA LIMPO APÓS 1º LOOP

for($cont=0;$cont<10;$cont++){

    echo "insira um nome \n";
    $nome1=fgets(STDIN);
    echo "insira uma idade: \n";
    $idade1=(int)fgets(STDIN);
    
    if($idade2<$idade1){
        $idade2= $idade1;
        $nome2 = $nome1;
        
    }
    $idade2=$idade1;
    $nome2= $nome1;

}
    
    echo "Pessoa mais nova é: $nome2, com $idade2 anos";

?>