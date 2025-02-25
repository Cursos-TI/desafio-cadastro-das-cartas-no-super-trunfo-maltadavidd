#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10
#define NAVIO 3
#define HABILIDADE 5
#define AGUA 0

int tabuleiro[TAMANHO][TAMANHO];

void inicializarTabuleiro() {
    for (int i = 0; i < TAMANHO; i++)
        for (int j = 0; j < TAMANHO; j++)
            tabuleiro[i][j] = AGUA;
}

void posicionarNavio(int x, int y, int dx, int dy) {
    for (int i = 0; i < 4; i++) {
        if (x >= TAMANHO || y >= TAMANHO || y < 0) return;
        tabuleiro[x][y] = NAVIO;
        x += dx;
        y += dy;
    }
}

void aplicarHabilidadeCone(int x, int y) {
    for (int i = 0; i < 3; i++) {
        for (int j = -i; j <= i; j++) {
            int nx = x + i, ny = y + j;
            if (nx >= 0 && ny >= 0 && nx < TAMANHO && ny < TAMANHO)
                tabuleiro[nx][ny] = HABILIDADE;
        }
    }
}

void aplicarHabilidadeCruz(int x, int y) {
    for (int i = -2; i <= 2; i++) {
        if (x + i >= 0 && x + i < TAMANHO)
            tabuleiro[x + i][y] = HABILIDADE;
        if (y + i >= 0 && y + i < TAMANHO)
            tabuleiro[x][y + i] = HABILIDADE;
    }
}

void aplicarHabilidadeOctaedro(int x, int y) {
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            if (abs(i) + abs(j) <= 2) {
                int nx = x + i, ny = y + j;
                if (nx >= 0 && ny >= 0 && nx < TAMANHO && ny < TAMANHO)
                    tabuleiro[nx][ny] = HABILIDADE;
            }
        }
    }
}

void exibirTabuleiro() {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    inicializarTabuleiro();
    
    posicionarNavio(rand() % TAMANHO, rand() % TAMANHO, 1, 0);
    posicionarNavio(rand() % TAMANHO, rand() % TAMANHO, 0, 1);
    
    aplicarHabilidadeCone(rand() % TAMANHO, rand() % TAMANHO);
    aplicarHabilidadeCruz(rand() % TAMANHO, rand() % TAMANHO);
    aplicarHabilidadeOctaedro(rand() % TAMANHO, rand() % TAMANHO);
    
    exibirTabuleiro();
    return 0;
}
