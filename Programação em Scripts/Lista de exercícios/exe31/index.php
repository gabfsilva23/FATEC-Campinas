
<?php

// 31) Crie um programa que leia um número n do usuário 
// e imprima o padrão abaixo na tela. Ex: para n = 5: 


echo "informe um número ";
$numero=(int)fgets(STDIN);

for($i=0 ;$i<=$numero;$i++){
     
     if( $i %2 == 0){
          echo "\n ";
     }
     for($j=$i;$j<=$numero;$j++){
          echo '* ';
          
          
     }
}



?>