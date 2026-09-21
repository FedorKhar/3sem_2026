#include <stdio.h>

int main ()
{
    int first = 0;

    fprintf (stderr, "I am in e\n");

    scanf ("%d", &first);
    fprintf (stderr, "%d -> %d - stderr\n", first, first + 4);
    printf ("%d\n", first + 4);

    return 0;
}
