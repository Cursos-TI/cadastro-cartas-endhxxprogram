#include <stdio.h>

int main () {
//INFO CARTA 1
char estado1 = 'C';
char codigo1 [10] = "C01";
char cidade1 [20] = "Curitiba";
int população1 = 1830000;
float area1 = 435.036;
float pib1 = 120.000000000;
int turismo1 = 47;
//NIVEL AVENTUREIRO

float resultado1;
resultado1 = area1 / população1;
float media1;
media1 = pib1 / população1;

printf ("CARTA 01:\n");

printf ("Insira o Estado da Carta (A-H):");
scanf ("%s", &estado1);

printf ("Insira o Código da Carta: (letra do estado e um número de 01 a 04. ex: A01):");
scanf ("%s", codigo1);

printf ("Insira a Cidade da Carta:");
scanf ("%s", cidade1);

printf ("Insira a População da Cidade:");
scanf ("%d", &população1);

printf ("Insira a Área (em quilometros quadrados):");
scanf ("%f", &area1);

printf ("Insira o PIB:");
scanf ("%f", &pib1);

printf ("Insira a Quantidade de Pontos Turísticos:");
scanf ("%d", &turismo1);

printf ("Resultados da Carta 1:\n");
printf ("Estado: %c\n", estado1);
printf ("Código da Carta: %s\n", codigo1); 
printf ("Cidade: %s\n", cidade1);
printf ("População: %d\n", população1);
printf ("Área: %f\n", area1);
printf ("PIB: %f\n", pib1);
printf ("Pontos Turísticos: %d\n", turismo1);
printf ("Densidade populacional: %f\n", resultado1);
printf ("PIB per Capita: %f\n", media1);

//INFO CARTA 2

printf ("CARTA 2\n");

char estado2 = 'D';
char codigo2 [10] = "D02";
char cidade2 [20] = "Caruaru";
int população2 = 405410;
float area2 = 923.150;
float pib2 = 29.738000;
int turismo2 = 40;

printf ("Insira o Estado da Carta (A-H):");
scanf ("%s", &estado2);

printf ("Insira o Código da Carta: (letra do estado e um número de 01 a 04. ex: A01):");
scanf ("%s", codigo2);

printf ("Insira a Cidade da Carta:");
scanf ("%s", cidade2);

printf ("Insira a População da Cidade:");
scanf ("%d", &população2);

printf ("Insira a Área (em quilometros quadrados):");
scanf ("%f", &area2);

printf ("Insira o PIB:");
scanf ("%f", &pib2);

printf ("Insira a Quantidade de Pontos Turísticos:");
scanf ("%d", &turismo2);

printf ("Resultados da Carta 2:\n");
printf ("Estado: %c\n", estado2);
printf ("Código da Carta: %s\n", codigo2); 
printf ("Cidade: %s\n", cidade2);
printf ("População: %d\n", população2);
printf ("Área: %f\n", area2);
printf ("PIB: %f\n", pib2);
printf ("Pontos Turísticos: %d", turismo2);
}
