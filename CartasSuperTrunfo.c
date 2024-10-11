#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char cidade [20];
    char codigo [3];
    int populacao, pontos_turisticos;
    float area, pib;

    printf ("Digite o código da cidade:\n");
    scanf ("%s", codigo);

    printf ("Digite o nome da cidade:\n");
    scanf (" %s", cidade);

    printf ("Digite a população:\n");
    scanf (" %d", &populacao);

    printf ("Qual a área da cidade?\n");
    scanf (" %f", &area);

    printf ("Existem quantos pontos turísticos?\n");
    scanf (" %d", &pontos_turisticos);

    printf ("Qual o PIB?\n");
    scanf (" %f", &pib);

    printf ("%s Cidade - %s\n", codigo, cidade);
    printf ("População: %d\nÁrea: %f\nPontos turisticos: %d\nPIB: %f\n", populacao, area, pontos_turisticos, pib);

return 0;
}
