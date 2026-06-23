#include <stdio.h>
int main(){
  int V[5]={2,7,4,8,0};
  int i, j, n = 5, tempo;
  
 
  for(i=0;i < n - 1;i++){
     for(j=0;j < n - 1 - i;j++){
         if (V[j]> V[j + 1]){
            tempo = V[j];
            V[j] = V[j + 1];
            V[j + 1] = tempo;
         }
     } 
     
   }
  printf("Vetor organizado\n");
  for ( i = 0; i < n; i++) {
       printf("%d ", V[i]);
   }


  return 0;
}