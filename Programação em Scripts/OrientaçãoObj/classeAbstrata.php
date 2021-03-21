<?php
//abstrata não permite instância
abstract class Pessoa{  //SUPERCLASSE
private $nome;
private $idade;
private $endereco;

    public function __construct($nome, $idade)
    {
        
    }
//métodos GET e SET
//atribuir valor para o atributo
    public function setNome($nome){
        $this->nome = $nome;
    }

    //recuperar o valor do atributo
    public function getNome(){
        return $this->nome;
    }

    protected abstract function setIdade($idade);//obrigatorio implementação pela classe filha
}

//classe filha
class Medico extends Pessoa{//SUBCLASSE

    public function setIdade($idade){

    }

    public function __construct()
    {
        echo "hello";
    }

}

$objMedico = new Medico();
$objMedico->setNome("Joao");
echo $objMedico->getNome();

?>