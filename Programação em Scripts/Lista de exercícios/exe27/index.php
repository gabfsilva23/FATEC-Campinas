
<?php

// 27) Escreva um programa que leia a quantidade de alunos em uma turma. 
// Em seguida, para cada aluno, leia a informação de suas 2 notas, 
// calcule a média e informe se o aluno está aprovado ou reprovado. 
// O aluno está aprovado apenas se a sua média for maio ou igual a 6

echo "insira Quantidade de alunos:";
$alunos=(int)fgets(STDIN);


for($cont=0;$cont<$alunos;$cont++){

    echo "Aluno $cont insira nota 1 \n";
    $nota1=(float)fgets(STDIN);
    
    echo "Aluno $cont insira nota 2 \n";
    $nota2=(float)fgets(STDIN);
    
    $media= ($nota1+$nota2)/2;
    if($media>=6){
        echo "Aluno $cont  aprovado, com média $media!\n";
    }

    else{
        echo "Aluno $cont  reprovado, com média $media!\n";
    }

}


?>