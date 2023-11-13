#include <stdio.h>

int main(){
    int max, num, soma;
    //maxanho da matriz tridimencional
    printf("maxanho do array tridimencional: ");
    scanf(" %d", &max);
    int arr[max][max][max];
    //for determinando números dos elementos da matriz
    for (int i = 0; i < max; i++){
        for (int j = 0; j < max; j++){
            for (int k = 0; k < max; k++){
                printf("Insira [%d][%d][%d]: ", i, j, k);
                scanf(" %d", &num);
                arr[i][j][k] = num;
            }
        }
    }
    //A) Impressão da diagonal principal
    printf("Diagonal principal:");
    for (int i = 0; i < max; i++){
        printf(" %d", arr[i][i][i]);
    }
    //B) Soma das arestas
    for (int i = 0; i < max; i++){
        //horizontal
        soma = soma + arr[0][0][i];
        soma = soma + arr[0][max][i];
        soma = soma + arr[max][0][i];
        soma = soma + arr[max][max][i];
    }
    //for precisa desconsiderar os numeros ja lidos das arestas horizontais
    for (int i = 1; i < max - 1; i++){
        //vertical
        soma = soma + arr[0][i][0];
        soma = soma + arr[0][i][max];
        soma = soma + arr[max][i][0];
        soma = soma + arr[max][i][max];
        //profundidade
        soma = soma + arr[i][0][0];
        soma = soma + arr[i][0][max];
        soma = soma + arr[i][max][0];
        soma = soma + arr[i][max][max];
    }
}