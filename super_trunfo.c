#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // ----- CARTA 1 -----

  // O estado tem uma letra de A até H.
  char estado1;

  // O código da carta é a letra de uma estado seguido com um número, exemplo A01, B02.
  char codigoCarta1[4];

  // O nome da cidade pode ter até 50 caracteres.
  char nomeCidade1[50];

  // Área para entrada de dados
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // ----- CARTA 2 -----

  // O estado tem uma letra de A até H.
  char estado2;

  // O código da carta é a letra de uma estado seguido com um número, exemplo A01, B02.
  char codigoCarta2[4];

  // O nome da cidade pode ter até 50 caracteres.
  char nomeCidade2[50];

  // Área para entrada de dados
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Uma instrução para o usuário

  printf("Cadastro de Cartas do Super Trunfo\n");
  printf("Insira os dados das duas cartas conforme solicitado.\n");
  printf("Para códigos, use o formato: letra + dois dígitos (ex: A01, B02).\n");
  printf("\n");

  printf("----- Carta 1 -----\n");
  printf("Digite o estado de A a H: ");
  scanf(" %c", &estado1); // espaço antes de %c ignora quebras de linha anteriores

  printf("Digite o código da carta, exemplo A01: ");
  scanf("%3s", codigoCarta1); // lê no máximo 3 caracteres

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade1); // lê até 49 caracteres ou até nova linha

  printf("Digite a populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a area em km²: ");
  scanf("%f", &area1);

  printf("Digite o PIB em bilhões de reais: ");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);



  printf("----- Carta 2 -----\n");
  printf("Digite o estado de A a H: ");
  scanf(" %c", &estado2); // espaço antes de %c ignora quebras de linha anteriores

  printf("Digite o código da carta, exemplo A01: ");
  scanf("%3s", codigoCarta2); // lê no máximo 3 caracteres

  printf("Digite o nome da cidade: ");
  scanf(" %49[^\n]", nomeCidade2); // lê até 49 caracteres ou até nova linha

  printf("Digite a populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a area em km²: ");
  scanf("%f", &area2);

  printf("Digite o PIB em bilhões de reais: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  printf("\n");
  printf("Cartas Cadastradas\n\n");

  // Carta 1
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("\n");

  // Carta 2
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("\n");

  printf("Cadastro das cartas concluido com sucesso!\n");
  return 0;
}
