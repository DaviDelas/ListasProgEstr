#include <stdio.h>
//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos
int main(void)
{
    int i, q;
    printf("Insira a quantidade de alunod: ");
    scanf("%d", &q);

    double notas[q];
    for(i=0; i<q; i++)
    {
        printf("Insira a nota do aluno %d : ", i);
        scanf("%lf", &notas[i]);
    }
    printf("As notas inseridas foram: \n");
    for(i=0; i<q; i++){
        printf("Nota aluno %i: %.2f\n", i, notas[i]);
    }
    return 0;
}