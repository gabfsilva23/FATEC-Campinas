
<?php

//incompleto

// 30) Uma escola possui um determinado número de turmas. 
// Crie um programa que leia a quantidade de turmas existentes na escola. 
// Para cada turma, leia a quantidade de alunos e, para cada aluno, 
// leia a sua média no semestre. Informe a média de cada uma das turmas.  

echo "insira Quantidade de turmas";
$turmas=(int)fgets(STDIN);


for($cont1=0;$cont1<$turmas;$cont1++){
    echo "insira Quantidade de alunos\n";
    $alunos=(int)fgets(STDIN);

        for($cont2=0;$cont2<$alunos;$cont2++){
            echo "informe a media:\n";
            $media=(float)fgets(STDIN);
            echo "Turma: $turmas ($cont1) Qntd: $alunos (aluno $cont2) Media: $media \n";
            
        }
}


?>