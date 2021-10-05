/*Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após 
este cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento 
dos preços cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda 
aumenta o percentual informado pelo vendedor para todos os CDs. Será o vendedor que 
escolherá o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual de 
aumento e, para cada CD, o valor sem aumento e o valor com aumento.
*/
//=============================== B I B L I O T E C S =====================================
#include<stdio.h>
#include <string.h>

//================================== A S S I G N S ========================================
float aumento1(), aumento2();

//====================================== M A E ============================================
int main() {
    char resp;
    do {
        sistema();
        printf("Deseja executar o sistema novamente? s ou n : ");
        scanf(" %c", &resp);
        
    } while (resp=='s' || resp=='S');
    
    return 0;
}

//=================================== F U N Ç Õ E S =======================================

//______________ s i s t e m a ________________
void sistema(){
    system("cls");
    int i, escolhaAumento;
    float precosCds[100], quantoAumentar;
    char aumentarPreco;
    for(i=0; i<10; i++){
        printf("Insira o valor do cd %d : ", i+1);
        scanf(" %f", &precosCds[i]);
    }
    system("cls");
    for(i=0; i<10; i++){
        printf("Preco Cd %d: ", i+1);
        printf("%.2f\n", precosCds[i]);
    }

    do{
        printf("Voce deseja aumentar os precos? S ou N : ");
        scanf(" %c", &aumentarPreco);
    }while(aumentarPreco != 's' && aumentarPreco != 'S' && aumentarPreco != 'n' && aumentarPreco != 'N');

    if(aumentarPreco == 's' || aumentarPreco == 'S' ){
        do{
            printf("Aumento 1 ou aumento 2? (a1 = 1, a2 = 2): ");
            scanf("%d", &escolhaAumento);
            if(escolhaAumento<1 || escolhaAumento>2)
                printf("Digite uma das duas opção!");
        }while(escolhaAumento<1 || escolhaAumento>2);
        if(escolhaAumento==1) { 
            quantoAumentar = aumento1();
        }
        else{
            quantoAumentar = aumento2();
        }
        for(i=0; i<100; i++) {
                precosCds[i] *= quantoAumentar;
        }
        
        system("cls");
        for(i=0; i<10; i++) {
            printf("Preco Cd %d = %.2f\n", i, precosCds[i]);
        }
    }
}
//_____________ a u m e n t o s _______________
float aumento1() {
        return 1.1;
}
float aumento2() {
    float quantoAumentar;
    printf("Digite o quanto quer aumentar: ");
    scanf("%f", &quantoAumentar);
    
    quantoAumentar = quantoAumentar/100 + 1;
    return quantoAumentar;
}