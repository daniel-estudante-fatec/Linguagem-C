#include <stdio.h>
void cadastro();
struct ficha
    {
    char nome[50];
    int idade;
    char Sex;
    };
int main()
{
    int id, ID[100];

  
    printf("Digite o seu ID:\n");
    scanf("%i", &id);
    for (int i = 0; i < 100; i++) {
        id == ID[i] ?
            printf("Usuário %i encontrado!", ID[i]) : 
            cadastro();
        
        }

    return 0;
}

void cadastro(){
      struct ficha nova;
      
            printf("\nDigite seu nome: \n");
            fgets(nova.nome, 50, stdin);
            
            printf("\nDigite sua idade: \n");
            scanf("%d", nova.idade);
            
            printf("\nDigite 'M' ou 'F' sexo: \n");
            scanf("%s", nova.Sex);
}