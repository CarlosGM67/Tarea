#include <stdio.h>
int main (void){

    int a,b;
    
    printf("intoduce la edad minima para ver la pelicula");
    scanf("%i",&b);

    printf("\t introduce tu edad?\n");
    scanf("%i",&a);

    if (a>=b){
        printf("puedes entrar.\n");
        }
        else{
        printf("No puedes entrar.\n");
        }

        return 0;
    }
        