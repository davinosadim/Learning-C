#include <stdio.h>

int main() 
{
    // Definindo variáveis
    char estado[10], codigo_carta[10], nome_cidade[50]; 
    int populacao, numero_pontos_turisticos;
    float area, pib;
    

    // PROCESSO PRIMEIRA CARTA

    // Solicita ao usuário para que informe os valores da carta 
    scanf("%s %s", estado, codigo_carta); // Entrada do usuário
    getchar(); // Consome o "\n" deixado pelo scanf
    fgets(nome_cidade, sizeof(nome_cidade), stdin); // Faz a leitura com nome compostos de cidades
    scanf("%d %f %f %d", &populacao, &area, &pib, &numero_pontos_turisticos); // Entrada do usuário

    // Saída conforme informações da carta fornecida pelo usuário
    printf("Carta 1: ");
    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s", nome_cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f km\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos);


    // PROCESSO SEGUNDA CARTA
  
    // Solicita ao usuário para que informe os valores da carta 
    scanf("%s %s", estado, codigo_carta); // Entrada do usuário
    getchar(); // Consome o "\n" deixado pelo scanf
    fgets(nome_cidade, sizeof(nome_cidade), stdin); // Faz a leitura com nome compostos de cidades
    scanf("%d %f %f %d", &populacao, &area, &pib, &numero_pontos_turisticos); // Entrada do usuário

    // Saída conforme informações da carta fornecida pelo usuário
    printf("\nCarta 2: ");
    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s", nome_cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2f km\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d", numero_pontos_turisticos);


    return 0;


}