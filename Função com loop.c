#include <stdio.h>


int main()
{

	int somar(int x, int y);
	void mensagem(void);
    int total = 0;
    int media = 0;
	for(int i = 0 ; i< 3; i++) {
		int X,Y, soma;
		printf("Digite um numero inteiro:\n");
		scanf("%d", &X);
		printf("Digite outro numero inteiro:\n");
		scanf("%d", &Y);

		soma = somar(X,Y);
        total += soma;
        media = total / 3;
		printf("A soma eh: %d \n", soma);
	}
	
	
	
	printf("O total eh: %d \n", total);
	printf("A media eh: %d \n", media);
	return 0;
}

int somar(int x, int y) {
	int mais;
	mais = x+ y;
	return mais;

}

void mensagem(void){
    printf("Legal vc pegou!");
}