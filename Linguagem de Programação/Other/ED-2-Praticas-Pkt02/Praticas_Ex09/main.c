#include "Pessoa.h"

/*
 * PRÁTICAS:
 *
 * Exercicio 9
 *
 * Altere o programa do Exercício 7, de forma que no lugar de variaveis do tipo Pessoa e Endereco,
 * ponteiros para esses tipos sejam declarados.
 *
 * Implemente a funcao
 *		Pessoa criaPessoa ()
 * que deve instanciar Pessoa (e Endereço) e deve pedir ao usuario todas as informacoes
 * (nao usual, mas funciona como exercicio)
 *
 * Altere a funcao abaixo para que receba os dados do endereço e crie um novo objeto Endereco,
 * para associar a "p"
 *      void alteraEndereco (Pessoa *p, <dados de endereco>)
 *
 * Faca as alteracoes que achar necessarias as outras funcoes, para que continuem funcionando.
 *
 * Material de aula: Prof. MSc. Giulliano Paes Carnielli
 *
 */
int main()
{
    /* Declara variavel Pessoa */
    Pessoa *pessoa;
    pessoa = (Pessoa *)malloc(sizeof(Pessoa));
    strcpy(pessoa->nome, "Paulo");
    pessoa->idade = 23;
    strcpy(pessoa->rg, "11111111-x");

    /* Declara variavel Endereco 1 */
    Endereco *end1;
    end1 = (Endereco *)malloc(sizeof(Endereco));
    strcpy(end1->rua, "Rua Pedro Pinheiro");
    end1->numero = 225;
    strcpy(end1->complemento, "Apto 25, Bloco 1");
    strcpy(end1->cidade, "Campinas");

    /* Associa end1 a pessoa */
    pessoa->endereco = end1;

    /* Imprime pessoa com endereco original */
    imprimePessoa(pessoa);

    /* Altera endereco de pessoa */
    alteraEndereco(pessoa,
                   "Rua Olavo Cunha",
                   1459,
                   "",
                   "Jundiai");

    /* Imprime pessoa com endereco alterado */
    imprimePessoa(pessoa);

    /* Atualiza endereco 2 */
    atualizaEndereco(pessoa, 'r', "Rua Olavo Bilac");
    atualizaEndereco(pessoa, 'n', "1549");

    /* Imprime pessoa com endereco atualizado */
    imprimePessoa(pessoa);

    return 0;
}
