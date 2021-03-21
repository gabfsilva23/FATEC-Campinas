<?php
    class Bola{

        //definição dos atributos
        private $cor;
        private $circunferencia;
        private $material;

        //definição dos métodos (Similiar ao GET e ao SET)
        public function trocaCor($novaCor){
            $this->cor = $novaCor; //set atribuo valor do atributo
        }

        public function mostraCor(){
            return $this->cor;//get recupero o valor do atributo
        }        
    }

    $objBola = new Bola(); //instância da classe, criação do objeto bola
    $corNova = "Azul";
    $objBola->trocaCor("Azul"); //acessando o método troca cor 1ªforma, ou
    $objBola->trocaCor($corNova); // 2ª forma
    $coratual = $objBola->mostraCor(); //acessando o método mostracor 1ªForma
    echo $coratual; // ou 2ª Forma
    echo $objBola->mostraCor();







?>