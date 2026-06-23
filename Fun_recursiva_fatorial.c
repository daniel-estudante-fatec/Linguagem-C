#include <stdio.h>
//função que chama a si mesma...(pilhas)
int pot(int x, int n)
{
    if(n == 0)
    return 1;
    else 
    return x * pot(x, n - 1);
}

int main()
{
    int x, n;
    printf("Digite o número (dê um espaço) e sua potência:\n");
    scanf("%d  %d", &x, &n);
    
    printf("Resposta: %d\n", pot(x, n ));

    return 0;
}
