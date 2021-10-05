#include<stdio.h>
int main(void)
{
    int i, total=0;
    float dados[10];
    
    for(i=0; i<10; i++)
    {
    printf("Insira valores: ");
    scanf("%f", &dados[i]);
    total = total + dados[i];
    }
    printf("Total: %d", total);
    return 0;
}