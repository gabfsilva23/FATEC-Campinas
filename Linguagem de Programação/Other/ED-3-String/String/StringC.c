#include "StringC.h"

// ---------------------------------------
// ***** Funções Privadas de StringC *****
// ---------------------------------------
int str_len(const char str[])
{
    int len = 0;
    while(str[len] != '\0')
        len++;

    return len;
}

String *create_raw_str(int len)
{
    String *s = (String*)malloc(sizeof(String));
    s->str_txt = (char*)calloc(len, sizeof(char));
    s->str_txt[0] = '\0';
    s->str_len = 0;
    return s;
}

// ---------------------------------------
// ***** Funções Públicas de StringC *****
// ---------------------------------------
String *create_empty_str()
{
    return create_raw_str(STR_BLOCK);
}

String *create_str(const char c[])
{
    if(c == NULL) return NULL;

    // Determinar o comprimento de 'c'
    int len = str_len(c);

    // Calcular número de blocos para a nova string
    int num_blocks = (len / STR_BLOCK) + 1;

    // DEBUG
    //printf("Numero de blocos: %d\n", num_blocks);

    // Criar string vazia com o tamanho determinado
    String *s = create_raw_str(num_blocks * STR_BLOCK);

    // Copiar conteúdo de 'c' para 's'
    int i;
    for (i = 0; i <= len; i++){
        s->str_txt[i] = c[i];
    }
    s->str_len = len;

    return s;
}

int append(String *s1, String *s2)
{
    if (s1 == NULL || s2 == NULL) return ERR_VOID_STR;
    if (s1->str_txt == NULL || s2->str_txt == NULL) return ERR_INVALID_STR;

    // Verifica se existe espaço alocado para 's2', em 's1'
    int num_blocks_s1 = (s1->str_len/STR_BLOCK) + 1;
    int len_new_str = s1->str_len + s2->str_len;

    if (len_new_str >= (num_blocks_s1 * STR_BLOCK)) {
        int new_num_blocks = (len_new_str / STR_BLOCK) + 1;
        int alloc_spc = new_num_blocks * STR_BLOCK;
        s1->str_txt = (char*)realloc(s1->str_txt, (alloc_spc * sizeof(char)));
    }

    // Copia dados de 's2' para 's1'
    int i;
    for(i=0; i <= s2->str_len; i++){
        s1->str_txt[ i + s1->str_len ] = s2->str_txt[i];
    }
    s1->str_len = len_new_str;

    return OP_OK;
}

int add_char(String *s1, char c)
{
    if (s1 == NULL) return ERR_VOID_STR;
    if (s1->str_txt == NULL) return ERR_INVALID_STR;

    // Verifica se existe espaço alocado para 'c'
    int num_blocks = (s1->str_len/STR_BLOCK) + 1;

    if ((s1->str_len + 1) >= (num_blocks * STR_BLOCK)) {
        // Se não há espaço, é necessário realocar
        int new_len = (num_blocks + 1) * STR_BLOCK;
        s1->str_txt = (char*)realloc(s1->str_txt, (new_len * sizeof(char)));
    }

    s1->str_txt[s1->str_len] = c;
    s1->str_len++;
    s1->str_txt[s1->str_len] = '\0';

    return OP_OK;
}

String *sub_str(String *s1, int ini, int fim)
{
    return NULL;
}

