#ifndef STRINGC_H_INCLUDED
#define STRINGC_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

// Defini��es gerais da biblioteca
#define STR_BLOCK 10 // 64

// Defini��es de c�digos de retorno
#define OP_OK 0
#define ERR_VOID_STR -1
#define ERR_INVALID_STR -2
#define ERR_INVALID_IDX -3


// Defini��o da Representa��o de Dados
typedef struct strc {
    char *str_txt;
    int str_len;
} String;

// Defini��o da Opera��es sobre String
// (representa a INTERFACE de String)
String *create_empty_str();
String *create_str(const char c[]);
int append(String *s1, String *s2);
int add_char(String *s1, char c);
String *sub_str(String *s1, int ini, int fim, int *status);
char *get_txt(String *s1);

#endif // STRINGC_H_INCLUDED
