#include <stdio.h>


 int fatorial(int x);
 
int main()
{
    int numero, result;
    
    
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    
    result = fatorial(numero);
    
    printf("O fatorial é: %i", result);
    
    return 0;
}


int fatorial(int x){
     int resultado;
     if (x == 0){
         resultado = 1;
     }else {
         resultado = x * fatorial (x-1);
     }
     return resultado; 
 }
