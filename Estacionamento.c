#include <stdio.h>
#include <time.h>

// Definição da estrutura para armazenar os dados do carro
struct Carro {
    char marca[100];
    char modelo[100];
    char placa[8];
};

// Protótipo da função que calcula o tempo
float tempo(float ent, float sai);

int main() {
    float entrada, saida;
    float prec;

    // Declaração correta da variável 'novo' do tipo 'struct Carro'.
    struct Carro novo;
    
    // A linha "struct Carro.novo;" que estava abaixo foi removida.
    
    printf("Estacionamento XANDÃO!!!.\n");
    printf("Seja bem-vindo(a)!\n");

    printf("Marca: \n");
    scanf("%s", novo.marca);

    printf("Modelo: \n");
    scanf("%s", novo.modelo);

    printf("Placa: \n");
    scanf("%s", novo.placa);
    
    printf("Digite a hora de entrada (ex: 10.5 para 10h30): ");
    scanf("%f", &entrada);
    
    printf("Digite a hora da saida (ex: 12.0 para 12h00): ");
    scanf("%f", &saida);
    
    float tem = tempo(entrada, saida);
    prec = tem * 2.5;
    
    printf("Valor a pagar: R$ %.2f\n", prec);
    
    return 0;
}

float tempo(float ent, float sai) {
    float temp;
    temp = sai - ent;
    return temp;
}