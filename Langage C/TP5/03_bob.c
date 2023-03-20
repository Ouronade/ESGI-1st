#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int entier;
    int i;
    int binaire;

    printf ("Entrez un nombre : ");
    scanf ("%d", &entier);

    printf("%d = (", entier);
    for (i = 2 * sizeof (entier); i >= 0; i--)
    {
        binaire = (entier >> i) & 0x00000001;
        printf("%d", binaire);    
    }
    printf(")_2");

    exit(EXIT_SUCCESS);
}
