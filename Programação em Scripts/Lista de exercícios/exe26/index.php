
<?php

// 26) Escreva um programa que leia a quantidade de funcionários em uma empresa e, 
// para cada funcionário leia seu nome e seu tempo de serviço (em meses). 
// Se o funcionário possuir mais de 12 meses na empresa, escreva a mensagem 
// “<NOME> tem direito a férias”. Caso contrário, escreva a mensagem “<NOME> não tem direito a férias”.
//  Ao final, exiba quantos funcionários possuem direito a férias e quantos não possuem 

echo "insira Quantidade de funcionarios \n";
$funcionario=(int)fgets(STDIN);

$cont2 =0;
$cont3 =0;



for($cont=0;$cont<$funcionario;$cont++){

    echo "insira o nome \n";
    $nome=fgets(STDIN);
    
    echo "insira o tempo \n";
    $tempo=(int)fgets(STDIN);
    
    if($tempo>12){
        echo "$nome tem direito a férias\n";
        $cont2++;
    }

    else{
        echo "$nome NÃO tem direito a férias\n";
        $cont3++;
    }

}
echo "$cont2 tem direito a férias.\n";
echo "$cont3 NÃO tem direito a férias\n";

?>