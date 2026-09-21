#include <stdio.h>

int main ()
{
    fprintf (stderr, "I am in d\n");
    int first = 0;

    scanf ("%d", &first);
    fprintf (stderr, "%d -> %d - stderr\n",first, first + 3);
    printf ("%d\n", first + 3);

    return 0;
}