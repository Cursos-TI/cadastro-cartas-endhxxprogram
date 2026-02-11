#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado[30]; 
  char cartas[5]; 
  char cidade[20];
  int população;
  int turismo;
  float pib;
  float area;

estado = Pernambuco; //Nome do Estado inicializado
cartas = C02; //Código da carta inicializado
cidade = Caruaru; //Cidade da carta inicializado
população = 405410; //População iniciaizada
turismo = 40; //Pontos turisticos inicializado
pib = 20.000000000; //PIB total inicializado
area = 98067.881; // area total inicializaada

  // Área para entrada de dados

printf ("Carta 1:\n");

printf ("Estado:");
scanf ("%s", &estado);

printf ("Código:");
scanf ("%s", &cartas);

printf ("Nome da cidade:");
scanf ("%s", &cidade);

printf ("População:");
scanf ("%d", &população);

printf ("Área");
scanf ("%f", &area);

printf ("PIB:")
scanf ("%f", &pib);

printf ("Números de pontos Turísticos:");
scanf ("%d", &turismo);

  // Área para exibição dos dados da cidade

printf ("Carta 1:\n");
printf ("Estado:", estado);

return 0;
} 
