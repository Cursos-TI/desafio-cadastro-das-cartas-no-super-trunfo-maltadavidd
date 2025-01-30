#include <stdio.h>

int main(){

    printf("Desafio super trunfo!\n");


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
    scanf("%f", &area);
    printf("Área em KM: %f Kilometros\n", area);
    
    printf("DIGITE O PIB\n");
    scanf("%f", &pib);
    printf("Pib: %f Bilhões de reais\n", pib);

    printf("PONTOS TURISTICOS\n");
    scanf("%d", &turismo);
    printf("Pontos turisticos: %d pontos turisticos\n", turismo);

    //organização das informações das cartas//

    printf("ESTADO: %c\nCODIGO: %s\nCIDADE: %s\nPOPULAÇÃO: %f\nÁREA: %f\nPIB: %f\nPONTOS TURISTICOS: %d\n" , Estado, codigo, cidade, populacao, area, pib, turismo);

    return 0;
    




}