// Variável Estática e Variável Automática.
// Variável Global

int gVariávelGlobal = 2; // ela se altera assim como a Estática.

#include <stdio.h>


int main(void){
    
    void teste(void);
    
    printf("Global = %d \n" , gVariávelGlobal);
    teste();
    teste();
    teste();
    return 0;
}

    void teste(void){
        
        /* Variável local autom.:
         esta não se altera mesmo chamando a função várias vezes.*/
        int vari = 2;
        vari *= 2;
          printf("Variável Local = %d \n", vari);
          
          
        /* Variável Local Estática:
         esta tem o propósito de manter o valor da variável e altera a cada chamada da função.*/
        static int varLoc = 2;
        varLoc *= 2;
        printf("Estática: %d \n" , varLoc);
      
    }