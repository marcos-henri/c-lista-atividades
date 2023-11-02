#include <stdio.h>
#include <math.h>
/*
1- ler terno de numeros para equação do 2 grau OK
1.1- resolução equação segundo grau
    ax²+bx+c
    d=b²-4ac
    x=-b±Vd/2a
2- somar raízes da equação quando maiores que 5 e menores que 10
3- produto quando menores que 2
4- finalizar quando nulo OK
5- informar a quantidade de raízes em cada operação
6- quantidade de raízes complexas
*/
float equacao(){
    float nums[3];
    printf("Digite 3 números, sendo A, B e C respectivamente. Digite 0 para finalizar\n");
    for (int i = 0; i<sizeof(nums)/sizeof(nums[0]); i++){
        scanf("%f", &nums[i]);
        if (nums[i]==0){
            printf("Finalizadis\n");
            break;
        }
        /*printf("%f \n", nums[i]);*/
    }
    float d = (pow(nums[2], 2)) - (4*nums[1]*nums[3]);
    printf("Resultado é %f ", d);
    
}
int main(){
    equacao();
    /*int cont=0, contSoma=0, contMult=0, contComplexo=0;
    float somaRaizes=0, multRaizes=0;

    printf("Digite 3 números, sendo A, B e C respectivamente\n");
    for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
        scanf("%f", &nums[i]);
        if (nums[i]==0){
            printf("Raíz nula, finalizando algoritmo");
            return 0;
        }
        if (nums[i]!=floor(nums[i])){
            contComplexo++;
        }

    }*/
}
