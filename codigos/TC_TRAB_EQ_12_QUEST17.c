#include <stdio.h>
#include <math.h> //biblioteca de expressões matemáticas

int main() {
    int n = 9;
    double resultado = 0.0;
// loop que executa o somatório
    for (int i = 1; i <= n; i++) {
        double termo = (pow(2, 3 * i) + pow(i, 2)) / (i + 1);
        resultado += termo;
    }

    printf("O resultado da expressão é: %lf\n", resultado);

    return 0;
}