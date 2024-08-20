#include <stdio.h>

int main(){
    int primo_numero;
    int secondo_numero;
    int media;

    printf("Inserisci il primo numero\n");
    scanf("%d", &primo_numero);

    printf("Inserisci il secondo numero\n");
    scanf("%d", &secondo_numero);

    media = (primo_numero + secondo_numero) / 2.0;

    printf("La media aritmetica e' : %d\n", media);
}