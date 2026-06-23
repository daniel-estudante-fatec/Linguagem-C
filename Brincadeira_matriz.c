/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mat[10][10];
    int i,j, cont=0;
    
    for(i=0 ; i<10; i++){
        for(j=0 ; j< 10; j++){
            cont++;
            mat[i][j] = cont;
        }
    }printf("\n");
    
for(i=0 ; i<10; i++){
        for(j=0 ; j< 10; j++){
            if (i==j){
                printf("[%d]", mat[i][j]);
            }
        }printf("\n");
    }
    
    
    return 0;
}