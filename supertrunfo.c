#include <stdio.h>

int main(){
 
    //aqui vamos declarar as variaveis para armazenar as informacoes

    char estado [50];
    char codigo [50];
    char cidade [50];
    int populacao;
    float area;
    float pib;
    int turistico;

    /*aqui o usuario vai digitar informacoes detalhadas sobre cada cidade que esta representada na carta  */

    printf("Digite uma letra de A a H que representa um dos 8 estados do brasil: \n");
    scanf("%s", &estado);

    printf("Agora digite a letra do estado em seguida de um numero de 01 a 04 para ser o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Digite aqui o nome da cidade do estado escolhido: \n");
    scanf("%s", &cidade);

    printf("Qual o numero de habtantes de %s: \n", cidade);
    scanf("%d", &populacao);

   printf("Qual a area em km de %s: \n", cidade);
   scanf("%f", &area);

   printf("Digite o PIB bruto da cidade: \n");
   scanf("%f", &pib);

   printf("Quantos pontos turisticos tem a sua cidade: \n");
   scanf("%d", &turistico);

   /*apos cadatrar as informacoes, o terminal vai transmitir na tela todas as informacoes digitadas*/

   printf("\n"); 
   printf("-CARTA 1- \n");
   printf("ESTADO: %s \n", estado);
   printf("CODIGO: %s%s \n", estado, codigo);
   printf("NOME DA CIDADE: %s \n", cidade);
   printf("POPULACAO: %d \n", populacao);
   printf("AREA: %.2f \n", area);
   printf("PIB: %.3f bi \n", pib);
   printf("NUMERO DE PONTOS TURISTICOS: %d\n", turistico);

   printf("\n");

    /*neste ponto iniciaremos o cadastramento da segunda carta do super trunfo! */

   printf("-AGORA VAMOS CADASTRAR A SEGUNDA CARTA- \n");

    printf("\n");

    printf("Digite uma letra de A a H que representa um dos 8 estados do brasil: \n");
    scanf("%s", &estado);

    printf("Agora digite a letra do estado em seguida de um numero de 01 a 04 para ser o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Digite aqui o nome da cidade do estado escolhido: \n");
    scanf("%s", &cidade);

    printf("Qual o numero de habtantes de %s: \n", cidade);
    scanf("%d", &populacao);

   printf("Qual a area em km de %s: \n", cidade);
   scanf("%f", &area);

   printf("Digite o PIB bruto da cidade: \n");
   scanf("%f", &pib);

   printf("Quantos pontos turisticos tem a sua cidade: \n");
   scanf("%d", &turistico);
 
   /*em seguida a apresentacao das informacoes*/

   printf("\n"); 
   printf("-CARTA 2- \n");
   printf("ESTADO: %s \n", estado);
   printf("CODIGO: %s%s \n", estado, codigo);
   printf("NOME DA CIDADE: %s \n", cidade);
   printf("POPULACAO: %d \n", populacao);
   printf("AREA: %.2f \n",area);
   printf("PIB: %.3f bi \n", pib);
   printf("NUMERO DE PONTOS TURISTICOS: %d\n", turistico);

    printf("\n");




}
