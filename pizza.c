#include <stdio.h>

    int main (void){

    int a;

    printf("[1].-pizza sencilla\n");
    printf("[2].-pizza mediana\n");
    printf("[3].-pizza familiar\n");
    printf("[4].-pizza jumbo\n");

    printf("\nelige un numero de acuerdo a la pizza\n");
    scanf("%i",&a);

    switch(a){
        case 1:
            printf("elegiste la pizza sencilla\n");
            break;
        case 2:
            printf("elegiste la pizza mediana\n");
            break;
        case 3:
            printf("elegiste la pizza familiar\n");
            break;
        case 4:
            printf("elegiste la pizza jumbo\n");
            break;
        default:
            printf("la opcion no esta en el menu");

    }
    return 0;

}