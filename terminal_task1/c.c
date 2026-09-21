#include <stdio.h>

int main ()
{
    int first = 0;

    fprintf (stderr, "I am in c\n");

    scanf ("%d", &first);
    fprintf (stderr, "%d -> %d - stderr\n", first, first * 2);
    printf ("%d\n", first * 2);

    return 0;
}
