#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float mediaA;
float mediaAritimeticaAlturas( float *alturas, int i);

//_______________________________________MAIN________________________________________
int main() {
float alturas[5];
int i=0;

do {
    printf("Digite a altura da pessoa %d :", i+1);
    scanf("%f", &alturas[i]);
    i++;
}while( i <= 5);
printf(" A media aritmetica das alturas sera: %f", mediaAritimeticaAlturas(alturas, i));

return 0;
}



// ................................f u n ç õ e s...................................

float mediaAritimeticaAlturas( float *alturas, int i) {
    for(i=0; i<5; i++) {
        mediaA = mediaA + alturas[i];
    }
    mediaA = mediaA/i;
    return mediaA;
}
// mediaAritimeticaAlturas= (altura[0] + altura[1] + altura [2]...)/ i+1