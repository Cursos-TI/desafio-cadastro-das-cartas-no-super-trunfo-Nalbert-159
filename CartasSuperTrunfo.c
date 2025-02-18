#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
      // Declaração de variáveis para a primeira carta
      char estado1;
      char codigo1[4];
      char nomeCidade1[50];
      int populacao1;
      float area1;
      float pib1;
      int pontosTuristicos1;
  
      // Declaração de variáveis para a segunda carta
      char estado2;
      char codigo2[4];
      char nomeCidade2[50];
      int populacao2;
      float area2;
      float pib2;
      int pontosTuristicos2;
  
      // Entrada de dados para a primeira carta
      printf("Digite a letra do estado (A-H) da primeira carta: \n");
      scanf(" %c ", &estado1);
  
      printf("Digite o código da primeira carta: \n");
      scanf(" %s ", codigo1);
  
      printf("Digite o nome da cidade da primeira carta: \n");
      scanf(" %s ", nomeCidade1);
  
      printf("Digite a população da cidade: \n");
      scanf(" %d", &populacao1);
  
      printf("Digite a área da cidade (em km²): \n");
      scanf(" %f", &area1);
  
      printf("Digite o PIB da cidade (em bilhões de reais): \n");
      scanf(" %f", &pib1);
  
      printf("Digite o número de pontos turísticos da cidade: \n");
      scanf(" %d", &pontosTuristicos1);
  
      // Entrada de dados para a segunda carta
      printf("\nDigite a letra do estado (A-H) da segunda carta: \n");
      scanf(" %c", &estado2);
  
      printf("Digite o código da segunda carta (ex: B02): \n");
      scanf(" %s", codigo2);
  
      printf("Digite o nome da cidade da segunda carta: \n");
      scanf(" %s", nomeCidade2);
  
      printf("Digite a população da cidade: \n");
      scanf(" %d", &populacao2);
  
      printf("Digite a área da cidade (em km²): \n");
      scanf(" %f", &area2);
  
      printf("Digite o PIB da cidade (em bilhões de reais): \n");
      scanf(" %f", &pib2);
  
      printf("Digite o número de pontos turísticos da cidade: \n");
      scanf(" %d", &pontosTuristicos2);
  
      // Exibição dos dados cadastrados
      printf("Carta 1:\n");
      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", codigo1);
      printf("Nome da Cidade: %s\n", nomeCidade1);
      printf("População: %d\n", populacao1);
      printf("Área: %.2f km²\n", area1);
      printf("PIB: %.2f bilhões de reais\n", pib1);
      printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  
      printf("\nCarta 2:\n");
      printf("Estado: %c\n", estado2);
      printf("Código: %s\n", codigo2);
      printf("Nome da Cidade: %s\n", nomeCidade2);
      printf("População: %d\n", populacao2);
      printf("Área: %.2f km²\n", area2);
      printf("PIB: %.2f bilhões de reais\n", pib2);
      printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
      
      return 0;
    
}
