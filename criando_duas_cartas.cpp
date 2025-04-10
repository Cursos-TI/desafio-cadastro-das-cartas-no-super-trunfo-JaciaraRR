#include <stdio.h>

// Definindo a estrutura da carta
struct CartaSuperTrunfo {
    char estado[3];                // Letra de 'A' a 'H'
    char codigo[5];             // Ex: A01, B03
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // PIB em bilhões
    int pontosTuristicos;      // Número de pontos turísticos
};

void lerCarta(struct CartaSuperTrunfo *carta, int numero) {
    printf("\n--- Inserindo dados da Carta %d ---\n", numero);

    printf("Estado (A-H): ");
    scanf(" %2s", &carta->estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);  // lê string com espaços

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void imprimirCarta(struct CartaSuperTrunfo carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %2s\n", carta.estado);
    printf("Código: %3s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    struct CartaSuperTrunfo carta1, carta2;

    // Ler dados das cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    // Imprimir cartas
    imprimirCarta(carta1, 1);
    imprimirCarta(carta2, 2);

    return 0;
}
