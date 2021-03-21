
<?php

// Crie um programa que, dada uma temperatura em graus célsius,
//  exiba uma mensagem informando o tipo do clima, de acordo com
//   as seguintes condições: se a temperatura estiver até 18 graus,
//    o clima é frio; se a temperatura estiver entre 19 e 23 graus,
//     o clima é agradável; se a temperatura estiver entre 24 e 35 graus,
//      o clima é quente; se a temperatura estiver acima de 35 graus,
//       o clima é muito quente.  

echo "Insira temperatura em Célsius:";
$temp=chop(fgets(STDIN));



if ($temp<=18){
 echo "Clima é frio\n";
 echo "abre o conhaque!";
}

elseif($temp>=19 and $temp<=23){
echo "Clima é agradével\n";
echo "ja ta na hora de mudar o chuveiro pro verão né?";
}

elseif($temp>=24 and $temp<=35){
    echo "o clima é quente\n";
    echo "Desliga o chuveiro, animal!";
}

else{
echo "o clima é muito quente\n";
echo "BEM VINDO A CAMPINAS!";
}

?>