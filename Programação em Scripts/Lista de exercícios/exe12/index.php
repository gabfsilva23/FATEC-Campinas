
<?php

// 12) Crie um programa que leia um número 
// do usuário e informe se e o número é par ou ímpar 

echo "Insira um valor :";
$n=chop(fgets(STDIN));

if($n % 2 == 0)
{
echo "par";
}
else
{
echo "impar";
}



?>