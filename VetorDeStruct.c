
#include <stdio.h>
#define MAX 5
int Cad_Aluno(void);

struct aluno{
    int idade, RA;
};


int main()
{
    
     int RA[MAX];
     
     int media = Cad_Aluno();
     
     printf("Média da idade dos alunos %d anos.", media);
      
    return 0;
}

int Cad_Aluno(void)
{
    struct aluno novo[MAX];
    int soma_idade= 0;
      
    for ( int i = 0; i < MAX; i++) {
        printf("Aluno %d DIGITE O RA:\n", i + 1);
        scanf("%d" , &novo[i].RA);
        
        printf("Digite sua idade: \n");
        scanf("%d", &novo[i].idade);
        
        soma_idade += novo[i].idade;
    }
     return (int)soma_idade / MAX;
}