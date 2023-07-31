/***************************************************************************************************
 * Header File: Pessoa.c
 * Implementa as funcoes relacionadas com o tipo Pessoa.
 * Material Didatico: Prf. MSc. Giulliano Paes Carnielli
 **************************************************************************************************/
#include "Pessoa.h"

/*
 * Procedimento: alteraEndereco
 * Descricao: altera o endereco de um objeto Pessoa
 * Parametros:
 *    1. (OUT) Pessoa *p: pessoa que deve ter seu endereco alterado
 *    2. Endereco *novoEnd: endereco que deve substituir o endereco original de Pessoa
 */
void alteraEndereco (Pessoa *p, Endereco *novoEnd) {
    /* Basta apontar o ponteiro endereco para o novo elemento */
    p->endereco = novoEnd;
}

/*
 * Procedimento: atualizaEndereco
 * Descricao: atualiza campos do endereco de um objeto Pessoa
 * Parametros:
 *    1. (OUT) Pessoa *p: pessoa que deve ter seu endereco alterado
 *    2. char m: chave que indica qual membro de Endereco deve ser atualizado
 *    3. char *valor: valor que deve ser usado para atualizar o campo indicado por 'm'
 *                    'r': rua
 *                    'n': numero
 *                    'c': complemento
 *                    'C': cidade
 *       OBS: valor eh sempre lido como string e deve ser convertido, se necessario
 */
void atualizaEndereco (Pessoa *p, char m, char *valor) {
    /* Verifica qual membro deve ser alterado */
    switch(m) {
    case 'r':
        strncpy(p->endereco->rua, valor, 32);
        p->endereco->rua[32] = '\0'; /* garante terminador, caso 'valor' seja maior que 32 */
        break;
    case 'n':
        p->endereco->numero = atoi(valor);
        break;
    case 'c':
        strncpy(p->endereco->complemento, valor, 32);
        p->endereco->complemento[32] = '\0'; /* garante terminador, caso 'valor' seja maior que 32 */
        break;
    case 'C':
        strncpy(p->endereco->cidade, valor, 24);
        p->endereco->cidade[24] = '\0'; /* garante terminador, caso 'valor' seja maior que 24 */
        break;
    }
}

/*
 * Procedimento: imprimePessoa
 * Descricao: imprime os dados de uma pessoa
 * Parametros:
 *    1. Pessoa *p: pessoa cujos dados devem ser impressos
 */
void imprimePessoa (Pessoa *p) {
    printf("*******************************************************************************\n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %.2d\n", p->idade);
    printf("RG: %s\n", p->rg);
    printf("Endereco:\n");
    printf("  Rua: %s\n", p->endereco->rua);
    printf("  Numero: %d\n", p->endereco->numero);
    printf("  Complemento: %s\n", p->endereco->complemento);
    printf("  Cidade: %s\n", p->endereco->cidade);
    printf("*******************************************************************************\n");
}
