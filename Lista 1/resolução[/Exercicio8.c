/*Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além 
de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha 
pode aparecer em mais de uma posição.
*/
//=============================== B I B L I O T E C S =====================================
 #include<stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>
 #include <string.h>
//================================== A S S I G N S ========================================
int resMedia(int idade[]);


//====================================== M A E ============================================

int main() {

    char resp;

    do {
        sistema();
        printf("Deseja executar o sistema novamente? s ou n : ");
        scanf(" %c", &resp);
        
    } while (resp=='s' || resp=='S');

}

//=================================== F U N Ç Õ E S =======================================
//______________ s i s t e m a ________________

void sistema() {
    system("cls");
    int i, idade[10], media;
    for(i=0;i<10;i++) {
        idade[i]=validacaoIdade(idade[i],i, 250, 1, "idade");
    }

    media = resMedia(idade);

    return 0;
}
//____________v a l i d a c a o________________
int validacaoIdade(int idade, int i, int max, int min, char parametro[]) {
    do {
        printf("Digite a %s %d: ", parametro, i+1);
        scanf("%d", &idade);
    }while(idade < min || idade > max);
    return idade;
}

//__________________m e d i a__________________
int resMedia(int idade[]) {
    int i, media = idade[0];
    for(i=1;i<10;i++) {
        media += idade[i];
    }
    return media/i;
}

//_____________e n c o n t r a r______________
int encontrar(int idade[]) {
    int i, j=0, maior, posicao[100];
    for(i=1;i<10;i++) {
        if(maior<idade[i])
        maior=idade[i];
        // 3 1 3
        // 0 2
        posicao[j]=i;
        j++;
    }
    //a idade mais velha eh x e ela ta nas posicoes
    //for int i blbal i < j i++
    //   vetor posicao

}