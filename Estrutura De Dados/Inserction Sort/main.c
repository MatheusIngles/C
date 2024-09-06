/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define n 10

int print(int *v){
    for(int i = 0;i < n; i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
int insetionsort(int *v){
    int troca = 0;
    for(int i = 0; i < n-1;i++){
        for(int j = i+1;j>0;j--){
            if(v[j]< v[j-1]){
                troca = v[j];
                v[j] = v[j-1];
                v[j - 1] = troca;
            }
        }
    }
    print(v);
}

void merge(int *v, int comeco, int fim){
    if(comeco < fim){
        meio = floor((comeco+fim)/2);
        merge(v,comeco, meio);
        merge(v,meio + 1, fim);
        mergesort()
    }
}


int main()
{
    int bosta[n] = {1,2,3,4,5,99,7,8,9,10};
    print(bosta);
    insetionsort(bosta);

    return 0;
}
