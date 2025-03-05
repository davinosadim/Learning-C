#include <stdio.h>

int main() 
{
    // Definindo variáveis
    char estado[10], codigo_carta[10], nome_cidade[50]; 
    int populacao, numero_pontos_turisticos;
    double densidade_populacional, pib_per_capita, area, pib;
   
    

    // PROCESSO PRIMEIRA CARTA

    // Solicita ao usuário para que informe os valores da carta 
    scanf("%s %s", estado, codigo_carta); // Entrada do usuário
    getchar(); // Consome o "\n" deixado pelo scanf
    fgets(nome_cidade, sizeof(nome_cidade), stdin); // Faz a leitura com nome compostos de cidades
    scanf("%d %lf %lf %d", &populacao, &area, &pib, &numero_pontos_turisticos); // Entrada do usuário


    //Cálculo de densidade populacional e pib per capita
    densidade_populacional = (double) populacao / area;
    pib_per_capita =  (pib * 1e9) / (double) populacao; //Transforma pib em milhões para realizar o cálculo corretamente

    // Saída conforme informações da carta fornecida pelo usuário
    printf("\nCarta 1: ");
    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s", nome_cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2lf km\n", area);
    printf("PIB: %.2lf bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2lf\n", densidade_populacional);
    printf("PIB per capita: %.2lf $reais\n", pib_per_capita);


    // PROCESSO SEGUNDA CARTA
  
    // Solicita ao usuário para que informe os valores da carta 
    scanf("%s %s", estado, codigo_carta); // Entrada do usuário
    getchar(); // Consome o "\n" deixado pelo scanf
    fgets(nome_cidade, sizeof(nome_cidade), stdin); // Faz a leitura com nome compostos de cidades
    scanf("%d %lf %lf %d", &populacao, &area, &pib, &numero_pontos_turisticos); // Entrada do usuário



    //Cálculo de densidade populacional e pib per capita
    densidade_populacional = (double) populacao / area;
    pib_per_capita =  (pib * 1e9) / (double) populacao; //Transforma pib em milhões para realizar o cálculo corretamente

    // Saída conforme informações da carta fornecida pelo usuário
    printf("\nCarta 2: ");
    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s", nome_cidade);
    printf("Populacao: %d \n", populacao);
    printf("Area: %.2lf km\n", area);
    printf("PIB: %.2lf bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2lf\n", densidade_populacional);
    printf("PIB per capita: %.2lf $reais\n", pib_per_capita);

    return 0;


}