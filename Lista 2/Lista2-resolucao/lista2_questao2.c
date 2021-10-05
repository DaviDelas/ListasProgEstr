// Faça um algoritmo que calcule, por meio de sub-algoritmo 
// o valor de x(real) elevado a n(inteiro)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
//---------------------assinando função/variaveis de função--------------------------
void mensagemInsiraX();
void mensagemInsiraN();
float calcularValorX(float x, int n);
//-----------------------------------------------------------------------------------

//_______________________________________MAIN________________________________________
//______declarando_______
int main() {
setlocale(LC_ALL, ""); 
int n ;
float x;
//______mensagens________
system("cls");
    mensagemInsiraX();
        scanf("%f", &x);
    mensagemInsiraN();
      scanf("%d", &n);
//______resultado________
printf("O valor de %.1f elevado a %d sera: %.2f", x, n, calcularValorX(x, n));
return 0;
}//__________________________________________________________________________________

// ................................f u n ç õ e s.....................................
//.....mensagens.....
void mensagemInsiraX(){
    printf("Insira o valor de x: ");
}

void mensagemInsiraN(){
    printf("Insira o valor de y: ");
}
//.....calculos......
float calcularValorX(float x, int n) {
    system("cls");
    float resultado=1; // auxiliar
    for (int i=0; i<n; i++) {
        resultado = resultado*x;
    }
    return resultado;
}//..................................................................................