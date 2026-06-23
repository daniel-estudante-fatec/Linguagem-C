

#include <stdio.h>

int Calculo(float vGas , float vEta);

int main()
{
    float Gas, Eta;
    
    
    printf("Qual é o preço da gasolina?:\n");
    scanf("%f", &Gas);
    
    printf("Qual é o preço do Etanol?:\n");
    scanf("%f", &Eta);
    
    int Calc = Calculo(Gas , Eta);

    return 0;
}

int Calculo(float vGas, float vEta)
{
    
    if(vGas * 0.7 > vEta){
        printf("Abasteça com Etanol!");
    }else if(vGas *0.7 < vEta){
        printf("Abasteça com Gasolina!");
    }else{
        printf("Dá no mesmo!");
    }
}
