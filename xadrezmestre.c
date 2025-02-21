#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para mover o Cavalo usando loops aninhados
void moverCavalo(int movimentos) {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) { // Apenas um movimento "L" por iteração
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre - 5 casas para a direita (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (recursivo)
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Movimento da Rainha - 8 casas para a esquerda (recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo - Executa 3 movimentos em "L"
    moverCavalo(3);

    return 0;
}
