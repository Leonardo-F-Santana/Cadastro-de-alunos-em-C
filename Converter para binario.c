#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void converterParaBinario(int numero) {
    if (numero > 0) {
        converterParaBinario(numero / 2);
        printf("%d", numero % 2);
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("O numero %d em binario e: ", numero);
    if (numero == 0) {
        printf("0");
    } else {
        converterParaBinario(numero);
    }
    printf("\n");
    
}