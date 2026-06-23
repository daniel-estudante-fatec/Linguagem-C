#include <stdio.h>

void bubble(int vet[], int t);
int buscaBin(int vet[], int tamanho, int valor);

int main() {
    int vet[] = {3, 4, 5, 7, 8, 91, 2, 36, 5, 4};
    int tam = sizeof(vet) / sizeof(vet[0]);
    bubble(vet, tam);
    printf("Vetor ordenado: ");
    for (int i = 0; i < tam; i++) {
        printf("%d - ", vet[i]);
    }
    printf("\n");

    int valor = 99;
    int resultado = buscaBin(vet, tam, valor);
    if (resultado != -1) {
        printf("Valor %d encontrado no índice %d\n", valor, resultado);
    } else {
        printf("Valor %d não encontrado\n", valor);
    }

    return 0;
}

void bubble(int vet[], int t) {
    int aux;
    for (int i = 0; i < t - 1; i++) {
        for (int j = 0; j < t - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}

int buscaBin(int vet[], int tamanho, int valor) {
    int ini = 0;
    int fim = tamanho - 1;
    while (ini <= fim) {
        int meio = ini + (fim - ini) / 2;
        if (vet[meio] == valor) {
            return meio; // valor encontrado
        } else if (valor < vet[meio]) {
            fim = meio - 1;
        } else {
            ini = meio + 1;
        }
    }
    return -1; // valor não encontrado
}