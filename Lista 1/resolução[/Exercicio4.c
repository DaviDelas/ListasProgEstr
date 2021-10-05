#include<stdio.h>

int main(void)
{
    int i;
    char letras[15];
    for(i=0; i<15; i++)
    {
        printf("Insira a letra: ");
        scanf("%c", &letras[i]);
        fflush(stdin);
    }

    for(i=15; i>=0; i--)
    {
        printf("%c", letras[i]);
    }
    return 0;
}