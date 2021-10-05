#include<stdio.h>
int main(void)
{
    int i;
    float matriculas[5], salarios[5], menorSal, maiorSal;

    for(i=0; i<5; i++)
    {
        printf("Insira a sua matricula: ");
        scanf("%f", &matriculas[i]);

        printf("Insira seu salario: ");
        scanf("%f", &salarios[i]);
    }
    menorSal=salarios[1];
    maiorSal=salarios[1];

    for(i=0; i<5; i++)
    {
        if (salarios[i]<menorSal)
            menorSal=salarios[i];
    }

    for(i=0; i<5; i++)
    {
        if (salarios[i]>maiorSal)
            maiorSal=salarios[i];
    }
    
    printf("Matriculas        Salarios\n");
    for(i=0; i<5; i++)
        printf("%.0f                R$%.2f\n", matriculas[i], salarios[i]);

    printf("Menor salario: R$%.2f\n Maior salario: R$%.2f", menorSal, maiorSal);
    return 0;
}