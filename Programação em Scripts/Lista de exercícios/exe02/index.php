
<?php


// Crie um programa que solicite o nome, o endereço e a 
// idade do usuário e depois mostra os dados digitados em uma única linha. Exemplo: 
//  <nome> mora no endereço: <endereço> e tem <telefone> anos.
// // <!-- condicional simples -->

    echo "Insira um nome: ";
    $nome = fgets(STDIN);
    echo "Insira um endereço: ";
    $endereco = fgets(STDIN);
    echo "Insira uma idade: " ;
    $idade = fgets(STDIN);

    echo "Nome $nome, mora no endereço: $endereco e tem $idade anos.";

?>