#include <stdio.h>
#include <stdlib.h>
#include "StringC.h"

int main()
{
    String *s1 = create_str("Primeira string de teste.....");
    String *s2 = create_str("1234567890");
    add_char(s1, '!');

    append(s1, s2);

    printf("String s1: [%s]\n", get_txt(s1));

    String *s3 = sub_str(s1, 9, 23, NULL);
    printf("String s3: [%s]\n", get_txt(s3));


    String *s4 = NULL;
    printf("String s4: [%s]\n", get_txt(s4));

    int status;
    String *s5 = sub_str(s3, 9, 23, &status);
    printf("String s5: [%s]\tStatus: %d\n", get_txt(s5), status);

    return 0;
}
