<?php
    //criando a classe pessoa
    class Pessoa{
        //atributos ou variáveis ou propriedades
        var $nome;
        var $cordosOlhos;
        var $altura;   
        var $peso;          
        
        //metodos ou funções ou procedimentos
        public function imprimePessoa($nomedaPessoa){
            if($nomedaPessoa == $this->nome)
                echo "Cor dos olhos = $this->cordosOlhos 
                e altura = $this->altura, sexo = $this->sexo";
            else
                echo "Pessoa não encontrada";
        }     
        
        //limitando acesso
        //privado, acessível somente dentro da classe
        private $sexo;
        private function imprimeNome(){}
        
        //protected, acessível dentro da classe e das classes que herdam
        protected $idade;
        protected function imprimeIdade(){}
    }

    //criando instâncias da classe pessoa
    $pessoa1 = new Pessoa(); //$pessoa1 objeto da classe pessoa
    $objPessoa = new Pessoa();//$objPessoa outro objeto da classe pessoa
    $x = new Pessoa();

    //acessando objeto $pessoa1
    $altura = $pessoa1->altura;
    $cordosOlhos = $pessoa1->cordosOlhos;
    $peso = $pessoa1->peso;

    $objPessoa->imprimePessoa("Joao");

    //atribuindo valores
    $pessoa1->nome = "Joao";
    $pessoa1->altura = 1.90;
    $pessoa1->cordosOlhos = "preto";
    $pessoa1->sexo = "M";//não funciona

    $pessoa1->imprimePessoa("Joao");



?>