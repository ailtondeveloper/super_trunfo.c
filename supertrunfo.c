#include <stdio.h>
#include <string.h>

// Definição de uma estrutura para representar as cartas
struct Carta {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    // Inicialização das cartas
    struct Carta carta1 = {"Acre", "A01", "Rio Branco", 364756, 9.223, 6.76, 18};
    struct Carta carta2 = {"Ceará", "C02", "Fortaleza", 2574412, 312.353, 73.0, 30};

    // Exibindo dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código da carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área em km²: %.2f\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n\n", carta1.pontosTuristicos);

    // Exibindo dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código da carta: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área em km²: %.2f\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}