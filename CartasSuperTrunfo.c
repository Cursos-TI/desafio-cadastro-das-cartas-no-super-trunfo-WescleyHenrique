#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 2 // Definindo um limite para o número de cartas

// Estrutura para armazenar informações de uma carta do Super Trunfo
typedef struct {
    char estado[50];
    char codigo[20];
    char nomeCidade[50];
    int populacao;
    double area;
    double PIB;
    int pontosTuristicos;
} Carta;

int main() {
    Carta cartas[MAX_CARTAS]; // Armazenar as cartas
    int numCartas = 0; // Contador de cartas cadastradas

    // Loop para receber os dados de duas cartas
    for (numCartas = 0; numCartas < MAX_CARTAS; numCartas++) {
        printf("Cadastro da carta %d:\n", numCartas + 1);

        printf("Defina o estado: \n");
        scanf(" %s", cartas[numCartas].estado);

        printf("Defina o código da carta: \n");
        scanf(" %s", cartas[numCartas].codigo);

        printf("Defina o nome da cidade: \n");
        scanf(" %s", cartas[numCartas].nomeCidade);

        printf("Qual a população total da cidade? \n");
        scanf(" %d", &cartas[numCartas].populacao);

        printf("Qual a área da cidade (em km²)? \n");
        scanf(" %lf", &cartas[numCartas].area);

        printf("Qual o PIB da cidade? \n");
        scanf(" %lf", &cartas[numCartas].PIB);

        printf("Quantos pontos turísticos tem? \n");
        scanf(" %d", &cartas[numCartas].pontosTuristicos);

        printf("\n"); // Linha em branco para melhor legibilidade
    }

    // Exibe os dados cadastrados
    printf("\nDados das cartas cadastradas:\n");
    for (int i = 0; i < MAX_CARTAS; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código da carta: %s\n", cartas[i].codigo);
        printf("Nome da cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].PIB);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);

        // Cálculo da Densidade Populacional
        double densidadePopulacional = cartas[i].populacao / cartas[i].area;
        printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);

        // Cálculo do PIB per capita
        double pibPerCapita = (cartas[i].populacao > 0) ? (cartas[i].PIB / cartas[i].populacao) : 0;
        printf("PIB per capita: %.2f\n", pibPerCapita);

        // Comparação do PIB entre as duas cartas
    if (cartas[0].PIB > cartas[1].PIB) {
        printf("\nA carta vencedora é a Carta 1 (%s) com PIB de %.2f.\n", cartas[0].nomeCidade, cartas[0].PIB);
    } else if (cartas[0].PIB < cartas[1].PIB) {
        printf("\nA carta vencedora é a Carta 2 (%s) com PIB de %.2f.\n", cartas[1].nomeCidade, cartas[1].PIB);
    } else {
        printf("\nAs cartas têm PIB igual de %.2f.\n", cartas[0].PIB);
    }

    
    }
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
