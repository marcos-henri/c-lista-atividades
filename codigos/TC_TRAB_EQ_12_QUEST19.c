#include <stdio.h>
#include <math.h> //bilioteca de operações matemáticas

int main() {
    int n = 4;
    double resultado = 0;
//loops aninhados para calcular expressões com 3 somatórios
    for (int j = 1, pow2j = 2; j <= n; j++, pow2j *= 2) {
        for (int i = 1; i <= 6; i++) {
            for (int k = 3; k <= 7; k++) {
                double denominador = i * k + 1;
                double termo = (pow2j * i + k) / denominador * k * pow(j, i);
                resultado += termo;
            }
        }
    }

    printf("O resultado da expressão fornecida é: %lf\n", resultado);

    return 0;
}
