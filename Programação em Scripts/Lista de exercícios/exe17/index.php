
<?php

// 17) Usando a estrutura Switch, crie um programa que solicita
// o nome de uma das regiões do Brasil e mostra uma lista com todos
// os estados desta região. Ex: o usuário digita SUL, 
// o programa mostra Paraná (PR), Santa Catarina (SC), Rio Grande do Sul (RS). 

// echo "Digite a região do Brasil desejada\n";
// $regiao= fgets(STDIN);

$regiao=readline("Digite a região do Brasil desejada \n");
echo "obs.: Para Centro-Oeste digite 'CO' .\n";

if($regiao=='nordeste' or $regiao=='Nordeste' or $regiao=='NORDESTE'){
    $regiao= 1;
}
if($regiao=='norte' or $regiao=='Norte' or $regiao=='NORTE'){
    $regiao= 2;
}
if($regiao=='co' or $regiao=='Co' or $regiao=='CO'){
    $regiao= 3;
}
if($regiao=='sudeste' or $regiao=='Sudeste' or $regiao=='SUDESTE'){
    $regiao= 4;
}
if($regiao=='sul' or $regiao=='Sul' or $regiao=='SUL'){
    $regiao= 5;
}


switch($regiao){
    case 1:
        echo 
           "8 - Maranhão (MA) = São Luís\n
            9 - Piauí (PI) = Teresina\n
            10 - Ceará (CE) = Fortaleza\n
            11 - Rio Grande do Norte (RN) = Natal\n
            12 - Pernambuco (PE) = Recife\n
            13 - Paraíba (PB) = João Pessoa\n
            14 - Sergipe (SE) = Aracaju\n
            15 - Alagoas (AL) = Maceió\n
            16 - Bahia (BA) = Salvador\n";
    break;

    case 2:
       echo
       "1 - Amazonas (AM) = Manaus\n
        2 - Roraima (RR) = Boa Vista\n
        3 - Amapá (AP) = Macapá\n
        4 - Pará (PA) = Belém\n
        5 - Tocantins (TO) = Palmas\n
        6 - Rondônia (RO) = Porto Velho\n
        7 - Acre (AC) = Rio Branco\n";
    break;

    case 3:
        echo 
        "Distrito Federal (DF) = Brasília\n
        17 - Mato Grosso (MT) = Cuiabá\n
        18 - Mato Grosso do Sul (MS) = Campo Grande\n
        19 - Goiás (GO) = Goiânia\n";
    break;

    case 4:
        echo 
        "20 - São Paulo (SP) = São Paulo\n
         21 - Rio de Janeiro (RJ) = Rio de Janeiro\n
         22 - Espírito Santo (ES) = Vitória\n
         23 - Minas Gerais (MG) = Belo Horizonte\n";
    break;

    case 5:
        echo
        "24 - Paraná (PR) = Curitiba\n
         25 - Rio Grande do Sul (RS) = Porto Alegre\n
         26 - Santa Catarina (SC) = Florianópolis\n";
    break;
    
    default:
        echo 'Não é uma região valida!';
    break;
}



?>