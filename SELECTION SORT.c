/*
Este programa é um exemplo de SELECTION SORT com funções.

*/
#include <stdio.h>

void LeVet(int vet[], int n);
void Imprime(int vet[], int n);
void Sort(int vet[], int n);
void ImprimeOrd(int vet[], int n); 

int main()
{
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int vet[n];
        
    LeVet(vet,n);
    Imprime(vet, n);
    
    printf("\n");
    
    Sort(vet, n);
    ImprimeOrd(vet, n);

    return 0;
}

void LeVet(int vet[], int n)
{
    for(int i=0 ; i< n; i++){
       printf("\ninsira o valor de %d:  ", i + 1);
       scanf ("%d" , &vet[i]);
    }
}

void Imprime(int vet[], int n)
   {
        printf ("Vetor original:"); 
    for (int i = 0; i < n; i++) {
        printf ("%d -", vet[i]);
    }
}

void Sort(int vet[], int n)
{
 int menor, aux;
    for (int i = 0; i < n; i++) {
        for(int j= i + 1; j < n; j++){
            if (vet[i] > vet[j]){
                menor = vet[j];
       
            }
            if (i != menor){
                aux = vet[i];
                vet[i] = vet[menor];
                vet[menor] = aux;
            }
        }
    }
}

void ImprimeOrd(int vet[], int n)
   {
        printf ("Vetor ordenado:"); 
    for (int i = 0; i < n; i++) {
        printf ("%d -", vet[i]);
    }
    printf("\n");
}