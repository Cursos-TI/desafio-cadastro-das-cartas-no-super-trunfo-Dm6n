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
    
    char código [3];
    char cidade [20];
    int população, pontos_turísticos;
    float área, pib;

    printf ("Digite o código da cidade:\n");
    scanf ("%s", &código);
    
    printf ("Digite o nome da cidade:\n");
    scanf ("%s", &cidade);

    printf ("Digite a população:\n");
    scanf ("%d", &população);

    printf ("Qual a área da cidade?\n");
    scanf ("%f", &área);

    printf ("Existem quantos pontos turísticos?\n");
    scanf ("%d", &pontos_turísticos);

    printf ("Qual o PIB?\n");
    scanf ("%f", &pib);

    printf ("%s Cidade - %s\n", código, cidade);
    printf ("População: %d\nÁrea: %f\nPontos turísticos: %d\nPIB: %f\n", população, área, pontos_turísticos, pib);

return 0;
}
