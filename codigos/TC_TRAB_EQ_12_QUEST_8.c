#include <stdio.h>
#include <math.h>
/*
1- ler terno de numeros para equação do 2 grau
2- somar raízes da equação quando maiores que 5 e menores que 10
3- produto quando menores que 2
4- finalizar quando nulo
5- informar a quantidade de raízes em cada operação
6- quantidade de raízes complexas
*/
int main(){
    int nums[3], cont=0, soma=0, contSoma=0, mult=0, contMult=0, contComplexo=0;

    printf("Digite 3 números, sendo A, B e C respectivamente\n");
    for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
        scanf("%d", &nums[i]);
        if (nums[i]==0){
            printf("Raíz nula, finalizando algoritmo");
            return 0;
        }
        if (nums[i]!=floor(nums[i])){
            contComplexo++;
        }
    }
    if (){
        
    }
    
    
}
