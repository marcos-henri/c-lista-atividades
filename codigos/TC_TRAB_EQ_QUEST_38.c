#include <stdio.h>

int main(){
    int tam, num, soma;
    //tamanho da matriz tridimencional
    printf("Tamanho do array tridimencional: ");
    scanf(" %d", &tam);
    int arr[tam][tam][tam];
    //for determinando números dos elementos da matriz
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            for (int k = 0; k < tam; k++){
                printf("Insira [%d][%d][%d]: ", i, j, k);
                scanf(" %d", &num);
                arr[i][j][k] = num;
            }
        }
    }
    //A) Impressão da diagonal principal
    printf("Diagonal principal:");
    for (int i = 0; i < tam; i++){
        printf(" %d", arr[i][i][i]);
    }
    //B) Soma das arestas
    for (int i = 0; i < tam; i++){
        for (int j = 0; j < tam; j++){
            for (int k = 0; k < tam; k++){
                
            }
        }
    }
}