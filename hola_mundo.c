#include<stdio.h>
#include<stdlib.h>
#include<time.h>/*esto es para sacar numeros con respecto al reloj*/
#include <ctype.h>/*libreria para manejar lo que es texto, en este caso pasar a mayuscula*/
int main ()
{
    int num,acerto=0,NOacerto=0,numRan,i;
    float dinero=0.00,perdio=0.00,aux=0.00;
    char letra ;
    printf("juega y gana\n hacierta el numero que crees que saldra entre el 1-10\n");
    
    do {
        printf("cuanto dinero quiere ingresar=\n");scanf("%f",&dinero);
        aux=dinero;
       
    } while (dinero<=0);
    do{
   do {
       do{
       if(dinero>0){
       printf("cual numero cree que salga del 1 al 10=\n");
       scanf("%i",&num);
       }
   } while (num<=0);
   } while (num>10);
    printf("el numeros randomicos\n");
    srand(time(NULL));
    numRan=rand();
    for(i=0;i<1;i++){ /*for es para numeros aleatorios*/
        numRan=1+rand()%10;
        printf("%i\t\n",numRan);
        numRan=numRan;
    }
    if (num==numRan)
    {
        printf("acertaste\n");
        dinero=dinero+1;
        acerto=acerto+1;
    }
    else {
        printf("no acertaste\n");
        dinero=dinero-0.50;
        NOacerto=NOacerto+1;
        perdio=aux-dinero;
       
    }
    printf("\n\n\ndesea seguir jugando \n");
    printf("Ingrese S para continuar y N para salir: ");
        fflush(stdin); /*esta instrucion es para limpar el buffer solo se usa cuando se lee texto*/
        scanf("%c",&letra);
    }while(toupper(letra) == 'S');
    {
    printf("el dinero que gano=\t%f", dinero);/*para imprimir se debe utilizar "%f"*/
    printf("\nel dinero perdido=\t%f", perdio);
    printf("\nlos aciertos que tubo son =\t%i", acerto);
    printf("\nlos no acietos son =\t%i", NOacerto);
    printf("\nBye, bye %c\n",letra);
    }
return 0;
}
