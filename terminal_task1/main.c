#include <stdio.h>

#include "tok.h"
#include "execute.h"

//a, b, c, d, e содержат код для дочерних процессов

int main ()
{
    char str [200] = {};
    char token = '|';
    char* array_ptr [20] = {};

    scanf ("%s", str);

    int num_str = tok (str, token, array_ptr);

    execute (array_ptr, num_str);
}