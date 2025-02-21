#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[100];
    char codigo[4];
    char cidade[100];
    float populacao;
    float area;
    float pib;
    int turismo;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para cadastrar uma carta
void cadastrarCarta(Carta *carta) {
    printf("DIGITE O ESTADO: ");
    fgets(carta->estado, sizeof(carta->estado), stdin);
    carta->estado[strcspn(carta->estado, "\n")] = '\0';

    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%3s", carta->codigo);
    getchar(); // Limpa o buffer

    printf("DIGITE A CIDADE: ");
    fgets(carta->cidade, sizeof(carta->cidade), stdin);
    carta->cidade[strcspn(carta->cidade, "\n")] = '\0';

    printf("DIGITE A POPULAÇÃO (em milhões): ");
    scanf("%f", &carta->populacao);

    printf("DIGITE A ÁREA EM KM²: ");
    scanf("%f", &carta->area);

    printf("DIGITE O PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("QUANTOS PONTOS TURÍSTICOS EXISTEM?: ");
    scanf("%d", &carta->turismo);
    getchar(); // Limpa o buffer

    // Calcula densidade populacional e PIB per capita
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta) {
    printf("\n====== INFORMAÇÕES DA CARTA ======\n");
    printf("ESTADO: %s\n", carta.estado);
    printf("CÓDIGO DA CARTA: %s\n", carta.codigo);
    printf("CIDADE: %s\n", carta.cidade);
    printf("POPULAÇÃO: %.2f milhões de habitantes\n", carta.populacao);
    printf("ÁREA: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("PONTOS TURÍSTICOS: %d\n", carta.turismo);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB PER CAPITA: %.2f bilhões/hab\n", carta.pibPerCapita);
}

// Função para comparar e determinar a carta vencedora
void compararCartas(Carta c1, Carta c2) {
    // Escolha do atributo para comparação
    char atributoEscolhido[] = "PIB PER CAPITA"; // Alterar conforme necessário
    float valor1 = c1.pibPerCapita;
    float valor2 = c2.pibPerCapita;
    int vencedor;

    // Critério de vitória
    if (strcmp(atributoEscolhido, "DENSIDADE POPULACIONAL") == 0) {
        vencedor = (valor1 < valor2) ? 1 : 2; // Menor densidade vence
    } else {
        vencedor = (valor1 > valor2) ? 1 : 2; // Maior valor vence
    }

    // Exibir resultado da comparação
    printf("\n=== COMPARAÇÃO DE CARTAS (ATRIBUTO: %s) ===\n", atributoEscolhido);
    printf("Carta 1 - %s (%s): %.2f\n", c1.cidade, c1.estado, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", c2.cidade, c2.estado, valor2);
    printf("\nResultado: Carta %d (%s) venceu!\n", vencedor, (vencedor == 1) ? c1.cidade : c2.cidade);
}

int main() {
    Carta carta1, carta2;

    printf("\nCADASTRO DA PRIMEIRA CARTA\n");
    cadastrarCarta(&carta1);

    printf("\nCADASTRO DA SEGUNDA CARTA\n");
    cadastrarCarta(&carta2);

    printf("\nCARTAS CADASTRADAS:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    compararCartas(carta1, carta2);

    return 0;
}
