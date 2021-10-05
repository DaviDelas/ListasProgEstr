#include<stdio.h>
int main(void)
{
    int i, repete=0;
    double arroz[5];
    float numeros[10], procurar, ondeRepete[10];

    for(i=0; i<10; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);
    }

    printf("Insira um numero de busca: ");
    scanf("%f", &procurar);
    for(i=0; i<10; i++)
    {
        if(numeros[i] == procurar){

        ondeRepete[repete] = i + 1 ;
        repete++;
        }
    }
    printf("O numero se repete %d vezes. Se repete em ", repete);

    for(i=0; i<repete-1; i++)
      printf(" %.2f, ", ondeRepete[i]);
    printf(" %.2f. ", ondeRepete[repete-1]);

    return 0;
}