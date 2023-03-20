#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float delta;
    float x0;
    float x1;
    float x2;
    printf("Veuillez entrer les differentes valeurs de votre polynome du second degré : \na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);

    if (a != 0)
    {
        delta = b*b - 4 * (a * c);
        
        if (delta < 0)
        {
            printf("Il n'y a pas de solution reelle.\n");
        }
        else if (delta == 0)
        {
            x0 = -b / (2 * a);
            printf("L'unique solution est : %f \n", x0);
        }
        else
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("Il  y a deux solutions : x1 = %f et x2 = %f \n", x1, x2);
        }
    }
    else if (b != 0)
    {
        x0 = -c / b;
        printf("L'unique solution est : %f \n", x0);
    }
    else
    {
        printf("C'est une fonction constante.");
    }

    exit(EXIT_SUCCESS);
}
