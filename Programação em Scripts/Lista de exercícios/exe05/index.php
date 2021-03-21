
<?php

// 5) Crie um programa que lê o salário de um funcionário,
//  e o percentual de reajuste. O programa deve calcular o 
//  salário reajustado e mostrar o resultado.  

echo "Insira um salário: ";
$salario1=fgets(STDIN);

echo "Digite a % do reajuste: ";
$reajuste=fgets(STDIN);


$salario2 = (($reajuste / 100)* $salario1)+$salario1;



echo "Salário com reajuste: $salario2\n";

?>