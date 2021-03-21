<?php
    class Bola{

        //definição dos atributos
        private $cor;
        private $circunferencia;
        private $material;

        //método construtor
        public function __construct($cor, $circunferencia, $material){
            $this->cor = $cor;
            $this->circunferencia = $circunferencia;
            $this->material = $material;
            echo "Instânciado";
        }

        //método destrutor
        public function __destruct()
        {
            echo "Objeto Destruído";
        }

        //definição dos métodos (Similiar ao GET e ao SET)
        public function trocaCor($novaCor){
            $this->cor = $novaCor; //set atribuo valor do atributo
        }

        public function mostraCor(){
            return $this->cor;//get recupero o valor do atributo
        }        
    }

$objBola = new Bola("Azul", 150, 'Plástico');


?>