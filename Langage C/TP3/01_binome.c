#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    printf("Rentrez la valeur de a puis de b\n");
    scanf("%i %i", &a, &b);                         /* TODO : demander des valeurs pour a et b */
    printf("%d + %d = %d\n", a, b, a + b);          /* TODO : afficher l'addition de a et b */
    a = a + b;
    b = a - b;
    a = a - b;                                      /* TODO : échanger les valeurs de a et de b */
    printf("%d - %d = %d\n", a, b, a - b);          /* TODO : afficher la soustraction de a et b */

    long c;
    c = a * b;
    printf("%d * %d = %ld\n", a, b, c);             /* TODO : affecter à c le résultat de la multiplication de a et b */

    float d;
    d = (float)a / b;
    printf("%d / %d = %f\n", a, b, d);              /* TODO : affecter à d le résultat de la division fractionnaire de a et b */

    exit(EXIT_SUCCESS);
}
