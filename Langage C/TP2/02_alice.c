#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi = 3.14;
    
    printf("pi vaut : %.2f\n", pi);
    printf("automatiquement pi vaut : %g\n", pi);
    printf("avec la notation scientifique, pi vaut : %e\n", pi);
    
    exit(EXIT_SUCCESS);
}
