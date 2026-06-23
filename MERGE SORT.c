/* MERGE SORT FEITO EM AULA*/
#include <stdio.h>
#include <stdlib.h>

void merge(int v[], int l, int m, int r){
    /*
    Serão 2 vetores:
    v[l..m-1]
    v[m..r-1]
    */
    
    int *w = malloc((r -1) * sizeof(int));
    int i = l ,j = m, k = 0;
    
    while(i < m && j <= r){
        if (v[i]) <= v[j])
            w[k++] = v[i++];
    }else{
        w[k++] = v[j++];
    }
    
    while(i<m0)
    w[k++] = v[i ++];
    while(j < r)
    w[k++] = v[j++];
    
    for( i =l; i < l; i++)
    v[i] = w[i];
    
    free(w);
    
    
}

int main()
{
    int vet[] = {2,4,6,4,8,1,3,5,9,10};
    merge(vet,0,4,9);

    return 0;
}
