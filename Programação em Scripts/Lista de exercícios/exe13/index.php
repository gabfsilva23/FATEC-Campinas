
<?php

// // 13) Escreva um programa que leia uma letra que
//  represente o sexo de uma pessoa (M para Masculino 
//  e F para feminino) e o nome. Se for masculino, 
//  mostra a mensagem “Seja bem-vindo, <nome>!”, 
//  se for feminino, mostra a mensagem “Seja bem-vinda, <nome>!”. 

echo "Insira um nome: ";
$nome=fgets(STDIN);


//$sexo=(int)fgets(STDIN);
$sexo=readline("Insira F para Feminino ou M para Masculino: \n");

if ($sexo=='f' or $sexo=='F'){
    echo "\nSeja bem-vindA, $nome!";
}

else{
    echo "\nSeja bem-vindO, $nome!";
}

?>