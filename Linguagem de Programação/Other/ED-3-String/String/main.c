#include <stdio.h>
#include <stdlib.h>
#include "StringC.h"

int main()
{
    String *s1 = create_str("Primeira string de teste.....");
    String *s2 = create_str("1234567890");
    add_char(s1, '!');

    append(s1, s2);

    printf("String: [%s]\n", s1->str_txt);
    return 0;
}
