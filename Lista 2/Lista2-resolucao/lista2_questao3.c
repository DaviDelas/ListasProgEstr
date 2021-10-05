// Faça um algoritmo que calcule, por meio de sub-algoritmo 
// o valor de x(real) elevado a n(inteiro)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
//---------------------assinando função/variaveis de função--------------------------
void mensagemInsiraNota1();
void mensagemInsiraNota2();
void mensagemOpcaoContinuar();
float calcularValorX(float x, int n);
//-----------------------------------------------------------------------------------

//_______________________________________MAIN________________________________________
//______declarando_______
int main() {
setlocale(LC_ALL, ""); 
int i, continuarOuNao ;
float notas[2][20];
//______mensagens________
system("cls");
do {
    mensagemInsiraNota1();
    scanf("%f", &notas[1][i]);

    mensagemInsiraNota2();
    scanf("%f", &notas[2][i]);
    
    mensagemOpcaoContinuar();
    scanf("%d", continuarOuNao);
    
    i++;
}while (i<20 || continuarOuNao != 1);








/*______resultado________
printf("O valor de %.1f elevado a %d sera: %.2f", i, notas, calcularValorX(x, n));
return 0;
}/*/

// ................................f u n ç õ e s.....................................
//.....mensagens.....
void mensagemInsiraNota1() {

    printf("Insira a nota 1: ");
}

void mensagemInsiraNota2() {
    printf("Insira a nota 2: ");
}
/*.....calculos......
float calcularValorX(float x, int n) {
    system("cls");
    float resultado=1; // auxiliar
    for (int i=0; i<n; i++) {
        resultado = resultado*x;
    }
    return resultado;
}//..................................................................................*/