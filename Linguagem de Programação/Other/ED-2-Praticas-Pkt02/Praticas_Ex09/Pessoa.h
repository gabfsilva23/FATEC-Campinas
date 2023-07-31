/***************************************************************************************************
 * Header File: Pessoa.h
 * Define as estruturas necessarias para a definicao do tipo Pessoa
 * Material Didatico: Prf. MSc. Giulliano Paes Carnielli
 **************************************************************************************************/
#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Estrutura Endereco */
typedef struct s_endereco {
  char rua[33];
  int numero;
  char complemento[33];
  char cidade[25];
} Endereco;

/* Estrutura Pessoa */
typedef struct s_pessoa {
    char nome[65];
    unsigned int idade;
    char rg[11];
    Endereco *endereco;
} Pessoa;

void alteraEndereco (Pessoa *p, char *rua, int numero, char *complemento, char *cidade);
void atualizaEndereco (Pessoa *p, char m, char *valor);
void imprimePessoa (Pessoa *p);

#endif // PESSOA_H_INCLUDED
