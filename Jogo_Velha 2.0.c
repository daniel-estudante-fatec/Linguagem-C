#include<stdio.h>
/*Vamos fazer um jogo da velha 
baseado em matriz*/

int main(void)
{
    //criar tabela em matriz
    char velha[3][3];
    int jogador1, jogador2, L, C;
    //inserir jogadas de forma que o jogador veja ao mesmo tempo.
    printf("###JOGO DA VELHA###\n");
printf("Insira X-x ou O-o para começar...\n");
    for(L=0;L<3;L++){
        scanf("[%c]", velha[L]);
        for(C=0; C<3; C++){
        scanf("[%c]", velha[C]);
        }
    }
    //mostrar toda a tabela e declarar o vencedor.
    for(L=0;L<3;L++){
        for(C=0;C<3;C++){
            printf("[%c]", velha[L][C]);
        }
    }
    
    
    return 0;
}