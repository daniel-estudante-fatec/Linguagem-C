
#include <stdio.h>

int S(int vet[],int t);
int Po(int vet[], int t);

int main()
{
    int tam, v[] = {5,2,4,6,8,4,23,45,8,9,4};
      tam = sizeof(v) / sizeof(v[0]); 
    
    int soma = S(v, tam);
    printf("Soma = %d\n", soma);
    
    int pot = Po(v,tam);
    printf("Potência = %d\n", pot);

    return 0;
}

int S(int vet[], int t)
{
    int res,s = t -1;
    if(t == 1){
        res = vet[0];
    }else{
       res =  vet[t - 1] + S(vet, t - 1);
    }
    return res;
}

int Po(int vet[], int t)
{
     int res,s = t -1;
    if(t == 1){
        res = vet[0];
    }else{
       res =  vet[t - 1] * S(vet, t - 1);
    }
    return res;
}
