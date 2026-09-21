#include <stdio.h>
#include <stdlib.h>

int main ()
{
    fprintf (stderr, "I am in b\n");

    int first = 0;
    scanf ("%d", &first);

    fprintf (stderr, "%d -> %d - stderr\n", first, first + 2);
    printf ("%d\n", first + 2);
}