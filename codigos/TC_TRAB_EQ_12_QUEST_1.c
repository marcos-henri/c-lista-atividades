#include <stdio.h>
#include <locale.h> //biblioteca para definições locais, aqui estou usando para poder usar caracteres especiais (mudar a codificação de UTF-8 para ISO 8859-1)

/*
1- Ler sequência de números - OK
2- Informar em tela a cada némero lido se séo maiores que 100 - OK
    Menor que 10 - OK
    igual a 20, 30 e 40 - OK
3- Finalizar quando for igual a 0 - OK
4- Quantidade de números lidos - OK
5- Quantidade lidos em cada seção - OK

*/
int main(){
    //definindo para reconhecer caracteres especiais, a partir da biblioteca locale.h
    setlocale(LC_ALL, "Portuguese_Brazil");
    int nums[100], cont = 0, maiorQueCem = 0, menorQueDez = 0, igualVinte = 0, igualTrinta = 0, igualQuarenta = 0;

    printf("Digite os números a serem lidos, diferentes de 0: \n");
    //loop para a leitura dos números
    for(int i=0; i<nums[i]; i++){
        scanf("%d", &nums[i]);
        if(nums[i]==0){
            printf("Número nulo (0) digitado, finalizando leitura\n");
            break;
        }
        if(nums[i] > 100){
            maiorQueCem++;
            printf("%d ", nums[i]);
            printf("é maior que 100 \n");
        }
        if(nums[i] < 10){
            menorQueDez++;
            printf("%d ", nums[i]);
            printf("é menor que 10 \n");
        }
        if(nums[i] == 20){
            igualVinte++;
            printf("%d ", nums[i]);
            printf("é igual a 20 \n");
        } else if(nums[i] == 30){
            igualTrinta++;
            printf("%d ", nums[i]);
            printf("é igual a 30 \n");
        } else if(nums[i] == 40){
            igualQuarenta++;
            printf("%d ", nums[i]);
            printf("é igual a 40 \n");
        }
        cont++;
    }
        printf("%d ", cont);
        printf(": Esta é a quantidade de números lidos: \n");

        printf("=============================================\n");

        printf("%d ", maiorQueCem);
        printf(": Esta é a quantidade de números maiores que 100: \n");

        printf("=============================================\n");

        printf("%d ", menorQueDez);
        printf(": Esta é a quantidade de números menores que 10: \n");

        printf("=============================================\n");

        printf("%d ", igualVinte);
        printf(": Esta é a quantidade de vezes que o némero 20 apareceu: \n");
        
        printf("=============================================");
        
        printf("%d ", igualTrinta);
        printf(": Esta é a quantidade de vezes que o némero 30 apareceu: \n");

        printf("=============================================\n");

        printf("%d ", igualQuarenta);
        printf(": Esta é a quantidade de vezes que o némero 40 apareceu: \n");
    return 0;
}