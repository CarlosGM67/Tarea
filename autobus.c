#include <stdio.h>

int main(void){

    int a,np;
    float km, cp, tp;
    
    printf("elige un numero de acuerdo al autobus\n");
    printf("[1]autobus $2*km\n");
    printf("[2[autobus $2.5*km\n");
    printf("[3[autobus $3*km\n");
    scanf("%i",&a);

    printf("ingrese los km q recorrera\n");
    scanf("%f",&km);
    printf("ingrese el numero de personas\n");
    scanf("%i",&np);
    
    switch(a){
        case 1:
        if (np<20){
            tp=20*2*km;
            cp=tp / 20;
        }
        else {
            tp=np*2*km;
            cp= tp / np;
        }
        break;

        case 2:
        if (np<20){
            tp=20*2.5*km;
            cp= tp / 20;
        }
        else {
            tp=np*2.5*km;
            cp= tp / np;
        }
        break;

        case 3:
        if (np<20){
            tp=20*3*km;
            cp= tp / 20;
        }
        else {
            tp=np*3*km;
            cp= tp / np;
        }
        break;

        default:
        printf("ese autobus no esta disponible\n");
    }

printf("el costo por persona es:%f\n",cp);
printf("el costo total es:%f\n",tp);

    return 0;
}