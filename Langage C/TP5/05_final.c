#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    const int max = 1001;
    int nombre = rand() % max;

    printf("%d \n", nombre);
    
    do
    {
        printf("A quel nombre pensez-vous ? ");
        scanf("%d", &rep);
        if(rep < nombre)
        {
            printf("Trop petit. \n");
        }
        else if(rep > nombre)
        {
            printf("Trop grand. \n");
        }
    }
    while (rep != nombre);
    {
        printf("Bien joué, le nombre était en effet %d", nombre);
    }    

    exit(EXIT_SUCCESS);
}
