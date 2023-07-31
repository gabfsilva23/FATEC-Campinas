#include "Pessoa.h"

/*
 * PRÁTICAS:
 *
 * Exercicio 7
 * Crie programa que defina duas estruturas: Pessoa e Endereco. Pessoa deve ter nome, idade, RG e
 * referência (ponteiro) para Endereco. Endereco deve ter rua, numero, complemento, CEP, cidade.
 *
 * O programa deve declarar e inicializar uma variavel do tipo Pessoa e outra do tipo Endereco
 * (ligando uma a outra).
 *
 * Implemente a funcao
 *     void alteraEndereco (Pessoa *p, Endereco *e)
 * que deve substituir o endereco da pessoa “p” por “c”
 *
 * Implemente a função
 *     void atualizaEndereco (Pessoa *p, char m, char *valor)
 * atualiza um valor do endereço (“m” indica qual: r, n, c, C)
 *
 * Implemente a funcao
 * void imprimePessoa (Pessoa*p)
 *
 * Material de aula: Prof. MSc. Giulliano Paes Carnielli
 */
int main()
{
    /* Declara variavel Pessoa */
    Pessoa pessoa;
    strcpy(pessoa.nome, "Paulo");
    pessoa.idade = 23;
    strcpy(pessoa.rg, "11111111-x");

    /* Declara variavel Endereco 1 */
    Endereco end1;
    strcpy(end1.rua, "Rua Pedro Pinheiro");
    end1.numero = 225;
    strcpy(end1.complemento, "Apto 25, Bloco 1");
    strcpy(end1.cidade, "Campinas");

    /* Associa end1 a pessoa */
    pessoa.endereco = &end1;

    /* Imprime pessoa com endereco original */
    imprimePessoa(&pessoa);

    /* Declara variavel Endereco 2 */
    Endereco end2;
    strcpy(end2.rua, "Rua Olavo Cunha");
    end2.numero = 1459;
    strcpy(end2.complemento, "");
    strcpy(end2.cidade, "Jundiai");

    /* Altera endereco de pessoa de 1 para 2 */
    alteraEndereco(&pessoa, &end2);

    /* Imprime pessoa com endereco alterado */
    imprimePessoa(&pessoa);

    /* Atualiza endereco 2 */
    atualizaEndereco(&pessoa, 'r', "Rua Olavo Bilac");
    atualizaEndereco(&pessoa, 'n', "1549");

    /* Imprime pessoa com endereco atualizado */
    imprimePessoa(&pessoa);

    return 0;
}
