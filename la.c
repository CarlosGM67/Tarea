#include <stdio.h>
int main (void){

int a,c,t;
 
 printf("cual es el numero total de personas para su evento\n");
 scanf("%i",&a);

    if (a>0 && a<=200){
        c=95;
    }
    else if(a<=300 && a>200){
        c=85;
    }
    else
        c=75;
    
t=c*a;
printf("el costo por persona es:%i\n",c);
printf("el total seria:%i\n",t);
 
return 0;

}