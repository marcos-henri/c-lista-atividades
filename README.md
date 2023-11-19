# c-lista-atividades

jsantos02061964@unijorge.pro.br

Lista de atividades do professor Vicente sobre a linguagem C <br>
1-8: Marcos<br>9-16: Marcos vini.<br>17-24: Marcell Henrique <br>25-32: Luiz Henrique <br>33-40: Manoel


```#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // chama o cabeçalho locale e adiciona acentos e caracteres especiais

    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    float media;
    float somaNotas = 0;
    int totalAlunos = 0;

    printf("Digite o nome do aluno (ou '0' para encerrar): ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  
    // evita que o enter ou uma nova linha seja reconhecida como caractere, ele atribuir o valor 0 ao carácter nova linha, se tiver
//em suma isso serve pra evitar bugs
    while (nome[0] != '0') {
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("Nome: %s\n", nome);
        printf("Matrícula: %d\n", matricula);
        printf("Nota 1: %.2f\n", nota1);
        printf("Nota 2: %.2f\n", nota2);
        printf("Nota 3: %.2f\n", nota3);
        printf("Média: %.2f\n", media);

        if (media >= 7) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }

        somaNotas += media;
        totalAlunos++;

        printf("\nDigite o nome do próximo aluno (ou '0' para encerrar): ");
        getchar();  // Limpar o buffer do teclado antes de usar fgets
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
    }

    if (totalAlunos > 0) {
        float mediaTurma = somaNotas / totalAlunos;
        printf("\nMédia de notas da turma: %.2f\n", mediaTurma);
    } else {
        printf("\nNenhum aluno inserido.\n");
    }

    return 0;
}```

![1](https://github.com/marcos-henri/c-lista-atividades/assets/112349436/096526d7-11fd-4526-8992-8d8e89a5670c)
![2](https://github.com/marcos-henri/c-lista-atividades/assets/112349436/cd2e2d0f-8968-48d9-aa66-d9ccd1caec37)
![3](https://github.com/marcos-henri/c-lista-atividades/assets/112349436/72cf4403-526f-4f2f-ace2-983e8f775a03)
![4](https://github.com/marcos-henri/c-lista-atividades/assets/112349436/ff1d9bf5-ad94-48a4-ac9a-7809adcc74ff)
