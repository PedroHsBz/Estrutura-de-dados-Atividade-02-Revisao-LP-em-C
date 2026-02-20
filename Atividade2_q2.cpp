#include <stdio.h>
#define max 5
void verificarVetor(int vetor[]) {
    for (int i = 0; i < max; i++) {
        for (int j = i + 1; j < max; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Invalido! A repeticao na lista\n");
                return; 
            }
        }
    }
    printf("Valido!\n");
}
int main() {
    int lista1[] = {10, 20, 30, 20, 50};
    verificarVetor(lista1);
    return 0;
}
