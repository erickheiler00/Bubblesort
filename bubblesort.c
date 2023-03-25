#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// for i in {1..20}; do time gcc principal.c; done

void bubbleSort(int n, int* v){
    for (int i=n-1; i>=1; i--){
        for (int j=0; j<i; j++){
            if (v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int* criaVetorEmbaralhado(int n){
    int *vetor = (int *)malloc(sizeof(int)*n);

    for (int i=0; i<n; i++){
        vetor[i] = i;
    }

    srand((unsigned)time(NULL));
    for (int i=0; i<n; i++){
        int r = rand() % n;
        int temp = vetor[i];
        vetor[i] = vetor[r];
        vetor[r] = temp;
    }

    return vetor;
}

void imprimeVetor(int n, int* v){
    for (int i=0; i<n; i++){
        printf("vetor[%d] = %d\n", i, v[i]);
        }
}

int main(){

    int n = 930000;
    
    int *vetor1 = criaVetorEmbaralhado(n);

    /*
    int a = 0;
    int b1 = n-1;
    int p = 0;
    int r1 = n-1;
    */

    //printf("Vetor Embaralhado:\n");
    //imprimeVetor(n, vetor1);
    //printf("\nBubbleSort\n");;
    bubbleSort(n, vetor1);
    //imprimeVetor(n, vetor1);
    
    return 0;
}