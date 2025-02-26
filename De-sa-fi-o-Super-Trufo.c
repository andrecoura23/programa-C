#include <stdio.h>

int main() {
    int População, Número, Pontos;
    float PIB;
    float Área;
    char Estado[100];
    char Código[100];
    char Carta[100];
    char Cidade[100];

    printf("Digite o Número da carta: \n");
    scanf("%s", Carta);

    printf("Digite o Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", Código);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Digite a população: \n");
    scanf("%d", &População);

    printf("Digite a Área: \n");
    scanf("%f", &Área);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
 
    printf("Digite Número de Pontos Turisticos: \n");
    scanf("%d", &Pontos);

    printf("Carta: %s \n", Carta);
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Código);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("População: %d \n", População);
    printf("Área: %.2f \n", Área);
    printf("PIB: %.2f \n", PIB);
    printf("Número de pontos Turisticos: %d \n", Pontos);

    return 0;
}