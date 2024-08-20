#include <stdio.h>

int main(){
    int primo_numero;
    int secondo_numero;
    int somma;

    printf("Inserisci il primo numero\n");
    scanf("%d", &primo_numero);

    printf("Inserisci il secondo numero\n");
    scanf("%d", &secondo_numero);

    somma = primo_numero * secondo_numero;

    printf("La somma dei due numeri e' : %d\n", somma);
}