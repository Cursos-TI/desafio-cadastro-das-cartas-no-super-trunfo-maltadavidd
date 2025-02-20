#include <stdio.h>
#include <string.h> // Para manipulação de strings

int main() {
    char Estado[100];
    char codigo[4];
    char cidade[100];
    float populacao;
    float area;
    float pib;
    int turismo;

    // Lê o Estado
    printf("DIGITE O ESTADO: ");
    fgets(Estado, sizeof(Estado), stdin);
    Estado[strcspn(Estado, "\n")] = '\0'; // Remove o '\n' do final da string

    // Lê o Código da Carta
    printf("DIGITE O CODIGO DA CARTA: ");
    scanf("%3s", codigo); // Limita a 3 caracteres + '\0' para segurança
    getchar(); // Limpa o '\n' do buffer após o scanf

    // Lê a Cidade
    printf("DIGITE A CIDADE: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; // Remove o '\n'

    // Lê a População
    printf("DIGITE A POPULAÇÃO (em milhões): ");
    scanf("%f", &populacao);

    // Lê a Área
    printf("DIGITE A ÁREA EM KM²: ");
    scanf("%f", &area); // Usei %f para simplificar, mas pode usar %e se quiser notação científica

    // Lê o PIB
    printf("DIGITE O PIB (em bilhões): ");
    scanf("%f", &pib);

    // Lê os Pontos Turísticos
    printf("QUANTOS PONTOS TURÍSTICOS EXISTEM?: ");
    scanf("%d", &turismo);

    // Saída final formatada
    printf("\n====== INFORMAÇÕES DO ESTADO ======\n");
    printf("ESTADO: %s\n", Estado);
    printf("CÓDIGO DA CARTA: %s\n", codigo);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %.2f milhões de habitantes\n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PONTOS TURÍSTICOS: %d\n", turismo);

    return 0;
}
