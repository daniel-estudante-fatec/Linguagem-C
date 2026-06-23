#include<stdio.h>
#include<stdlib.h>


void f1(int *px){
    (*px)++;
    printf("End. de X (f1): %d\n" , *px);
}
int main()
{
    int x = 10, *px;
    int y;
    
    px = &x;
    printf("Valor de X (main): %d\n" , x);
    f1(px);
    printf("Valor de X (f1): %d\n" , x);
    
    printf("Valor de X (main): %d\n" , x);

    scanf("%d", &y);

     printf("Valor de Y (main): %d\n" , y);

    
   /* printf("endereço de X:%d\n" , &x);
    //printf("%p" , &x);

    printf("\nValor de pX:  %d\n" , px);
    printf("endereço de pX: %p\n" , &px);

    printf("\nValor de pX por X: %d\n" , *px);
        
    *px = 100;
    printf("Valor de X: %d\n" , x);
    printf("\nValor de pX por X: %d\n" , *px);*/
    
    
    return 0;
}