
<?php

// 11) Crie um programa que leia dois valores (x e y)
//  representando um intervalo. Em seguida, leia um 
//  novo valor (z) e verifique se z pertence ao intervalo [x, y].


echo "Insira um valor para X:";
$x=chop(fgets(STDIN));

echo "Insira um valor para Y:";
$y=chop(fgets(STDIN));

echo "Insira um valor para Z:";
$z=chop(fgets(STDIN));



if($x<$y){
    if(($z>$x) and ($z<$y)){
       echo "$z pertence ao intervalo $x,$y";
    }
    else{
        echo "$z não está contido entre $x,$y";
    }

 
}

elseif($x>$y){
    if(($z<$x) and ($z>$y)){
    echo "$z pertence ao intervalo $x,$y";
    }
    else{
     echo "$z não está contido entre $x,$y";
    }
}

else{
 echo "intervalo não pode ser cálculado.";
}

?>