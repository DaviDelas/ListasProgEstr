#include <stdio.h>
//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos
int main(void)
{
    int alunos, i;
    printf("Insira a quantidade de alunos: ");
    scanf("%i", &alunos);
    fflush(stdin);
    double notas[alunos];

    for(i=0; i<alunos; i++)
    {
        printf("Insira a nota do aluno %d : ", i+1);
        scanf("%lf", &notas[i]);
    }
    printf("As notas inseridas foram: \n");
    for(i=0; i<alunos; i++){
        printf("Nota aluno %i: %.2f\n", i+1, notas[i]);
    }
    return 0;
}