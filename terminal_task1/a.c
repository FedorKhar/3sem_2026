#include <stdio.h>

int main ()
{
    fprintf (stderr, "I am in a\n");
    int first = 0;
    scanf ("%d", &first);
    fprintf (stderr, "%d -> %d - stderr\n", first, first);
    printf ("%d\n", first);
    return 0;
}