<?php

    class Pessoa{ //classe generalizada 
        //três atributos
        private $nome;
        private $idade;
        private $endereco;

        //métodos GET e SET
        //atribuir valor para o atributo
        public function setNome($nome){
            $this->nome =  $nome;
        }

        //recuperar o valor do atributo
        public function getNome(){
            return $this->nome;
        }

        protected function setIdade($idade){
            $this->idade = $idade;
        }

    }

    class Medico extends Pessoa{//classe especializada, herda todos atributos e métodos publicos e protegidos

        private $crm;

        public function setCRM($crm){//métodos especificos da classe filha
            $this->crm = $crm;
        }

        public function getCRM()
        {
            return $this->crm;
        }
    }

    $objJoao = new Pessoa();//criar instância da classe
    $objJoao->setNome("João Carlos");
    echo $objJoao->getNome();

    $objMedico = new Medico();
    $objMedico->setNome("Medico Carlos");//método existe na classe mãe
    echo $objMedico->getNome();






?>