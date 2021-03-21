
<?php

// Faça um programa que simule um caixa eletrônico. 
// É exibido um menu com as seguintes opções: 1 SAQUE, 2 DEPÓSITO, 3 SALDO.

// O saldo da conta deve ser definido no início do programa como R$ 500,00. 

// Se o usuário selecionar a opção SAQUE será perguntado pelo valor que deseja sacar. 
// Se for abaixo de R$ 500,00, autorizar o saque e exibir o saldo restante. 
// Se for acima de R$ 500,00 mostrar uma mensagem de saldo insuficiente. 

// Na opção DEPÓSITO o programa pergunta o valor a ser depositado. 
// Se o valor for positivo, adicionar ao saldo existente e mostrar na tela o novo saldo. 
// Se for um valor negativo, exibir mensagem de valor inválido.

// Para a opção SALDO, o programa exibe o saldo atual e agradece ao usuário por usar os serviços do banco.

echo "BEM VINDO!";
echo "Selecione o serviço:\n
1- SAQUE\n 2- DEPÓSITO\n 3- SALDO\n";
$opcao=chop(fgets(STDIN));

$saldo = 500;

switch($opcao){
    case 1:
        echo "Qual valor deseja sacar ?\n";
        $saque=chop(fgets(STDIN));

        if($saque<500){
            echo "\nSaque autorizado!\n";
            $saldo= $saldo-$saque;
            echo "Saldo atual de: $saldo";

        }
        else{
            echo "\nExcedeu o limite!";
        }
        break;

    case 2:
        echo "\nQual valor a ser depositado ?\n";
        $deposito=chop(fgets(STDIN));

        if($deposito>0){
            $saldo = $saldo + $deposito;
        }
        else{
            echo "\nValor inválido";
        }
        echo "\nSaldo após operação: $saldo";
        break;

    case 3:
        echo "\nSaldo : $saldo\n";
        echo "\nObrigado pela preferência!";
        break;

    default:
        echo "\nEscolha uma opção válida!";
        break;

}


?>