#include <stdio.h>

int main(){


//variaveis utilizadas//
    char Estado;
    char codigo[4];
    char cidade[20];
    float populacao;
    float area;
    float pib;
    int turismo;

//inserção de dados e caracteristicas das cartas//

    printf("DIGITE O ESTADO\n");
    scanf("%c", &Estado);
    printf("Estado: %c\n", Estado);
    
    printf("DIGITE O CODIGO DA CARTA\n");
    scanf("%s", &codigo);
    printf("Codigo da carta: %s\n", codigo);

    printf("DIGITE A CIDADE\n");
    scanf("%s", &cidade);
    printf("Cidade: %s\n", cidade);
    
    printf("DIGITE A POPULAÇÃO\n");  
    scanf("%f", &populacao);
    printf("População: %f milhoes de habitantes\n", populacao);

    printf("DIGITE A ÁREA EM KM\n");
    scanf("%e", &area);
    printf("Área em KM: %e Kilometros\n", area);
    
    printf("DIGITE O PIB\n");
    scanf("%f", &pib);
    printf("Pib: %f Bilhões de reais\n", pib);

    printf("PONTOS TURISTICOS\n");
    scanf("%d", &turismo);
    printf("Pontos turisticos: %d pontos turisticos\n", turismo);

    //organização das informações das cartas//

    printf("ESTADO: %c\nCARTA: %s\nCIDADE: %s\nPOPULAÇÃO: %f\nÁREA: %e\nPIB: %f\nPONTOS TURISTICOS: %d\n" , Estado, codigo, cidade, populacao, area, pib, turismo);

    return 0;
    




}