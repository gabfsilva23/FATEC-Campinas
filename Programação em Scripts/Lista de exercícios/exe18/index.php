
<?php

// 18) Usando o operador lógico E, faça um programa de supermercado
// que solicita a autorização de DOIS gerentes para poder cancelar 
// a compra de um produto. 
// 1  O sistema pergunta o código do produto. 
// 2 Depois pede o nome e senha do gerente 1,
// 3 depois pede o nome e senha do gerente 2. 
// 4 Se todos os dados estiverem corretos,
//  uma mensagem de cancelamento realizado é exibida junto com o código do produto. 
// Uma mensagem de erro deve ser exibida se algum dado estiver incorreto. 
// Você deverá definir em uma constante as senhas dos gerentes. 

echo "Insira o código do produto :";
$produto=(int) fgets(STDIN);

echo "\nNome do Gerente 1: ";
$gerente1= fgets(STDIN);
$senha1=readline("\nSenha Gerente 1: ");

echo "\nNome do Gerente 2: ";
$gerente2= fgets(STDIN);
$senha2=readline("\nSenha Gerente 2: ");

if ($senha1 == $senha2){
    echo "\nProduto $produto foi cancelado!";
}

else{
    echo "\nSenha INCORRETA, ordem não executada.\n
    Fim do programa";
    
}

?>