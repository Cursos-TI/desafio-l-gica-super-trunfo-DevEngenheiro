// Desafio Super Trunfo - Cidades
// Tema 2 - Comparando Cartas do Super Trunfo
// Desafio: nível novato
// Este código inicial serve como base para o desenvolvimento do sistema de comparação entre duas cartas já cadastradas, utilizando 
//estruturas de decisão if e if-else.

#include <stdio.h>    // Para entrada/saída
#include <string.h>   // Para funções de manipulação de strings (ex.: strcspn)
   
int main() {
   
    // Variáveis para a Carta 1:
    char estado1;                  // Armazena a letra do estado (A-H)
    char codigo1[4];               // Armazena o código da carta (ex: A01) + '\0'
    char nome_cidade1[50];         // Armazena o nome da cidade (até 49 caracteres + '\0')
    int populacao1;                // População da cidade (valores grandes)
    float area1;                   // Área da cidade em km²
    float pib1;                    // PIB da cidade
    int pontos_tur1;               // Número de pontos turísticos
    float densidade1;              // Densidade populacional (população / área)
    float pib_per_capita1;         // PIB per Capita (PIB / população)

    // Variáveis para a Carta 2:
    char estado2;          // Armazena a letra do estado (A-H)
    char codigo2[4];       // Armazena o código da carta (ex: A01) + '\0'
    char nome_cidade2[50]; // Armazena o nome da cidade (até 49 caracteres + '\0')
    int populacao2;        // População da cidade
    float area2;           // Área da cidade em km²
    float pib2;            // PIB da cidade
    int pontos_tur2;       // Número de pontos turísticos
    float densidade2;      // Densidade populacional
    float pib_per_capita2; // PIB per Capita

    // Mensagem de Boas-Vindas
    printf("Bem vindo ao Super Trunfo Cidades\n");
    printf("-----------------------------------\n");

    /* ========= LEITURA DOS DADOS DA CARTA 1 ========= */
    printf("\nDigite os dados da Carta 1:\n");

    // Estado
    printf("Digite a letra do Estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);

    // Código
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    // Limpar o buffer (consumir a nova linha)
    getchar();

    // Nome da Cidade (usa fgets para permitir espaços)
    printf("Digite o nome da cidade (Carta 1): ");
    fgets(nome_cidade1, 50, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // Remove o '\n'

    // População (unsigned long int: %lu)
    printf("Digite a população da cidade (Carta 1): ");
    scanf("%d", &populacao1);

    // Área
    printf("Digite a área da cidade em km2 (Carta 1): ");
    scanf("%f", &area1);

    // PIB
    printf("Digite o PIB da cidade (Carta 1) em reais (use ponto para decimais): ");
    scanf("%f", &pib1);

    // Número de Pontos Turísticos
    printf("Digite o número de Pontos Turísticos (Carta 1): ");
    scanf("%d", &pontos_tur1);

    // Cálculos para a Carta 1:
    densidade1 = (float)populacao1 / area1;     // Densidade populacional = população / área
    pib_per_capita1 = pib1 / (float)populacao1; // PIB per Capita = PIB / população

    /* ========= LEITURA DOS DADOS DA CARTA 2 ========= */
    printf("\nDigite os dados da Carta 2:\n");

    // Estado
    printf("Digite a letra do Estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);

    // Código
    printf("Digite o código da Carta 2 (ex: A02): ");
    scanf("%s", codigo2);

    // Limpar o buffer
    getchar();

    // Nome da Cidade
    printf("Digite o nome da cidade (Carta 2): ");
    fgets(nome_cidade2, 50, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    // População
    printf("Digite a população da cidade (Carta 2): ");
    scanf("%d", &populacao2);

    // Área
    printf("Digite a área da cidade em km2 (Carta 2): ");
    scanf("%f", &area2);

    // PIB
    printf("Digite o PIB da cidade (Carta 2) em reais (use ponto para decimais): ");
    scanf("%f", &pib2);

    // Número de Pontos Turísticos
    printf("Digite o número de Pontos Turísticos (Carta 2): ");
    scanf("%d", &pontos_tur2);

    // Cálculos para a Carta 2:
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    /* ========= EXIBIÇÃO DOS DADOS DAS CARTAS ========= */
    printf("\n======= Super Trunfo Cidades =======\n");

    // Exibição da Carta 1:
    printf("\n============== Carta 1 ==============\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("=====================================\n");

    // Exibição da Carta 2:
    printf("\n============== Carta 2 ==============\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_tur2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("=====================================\n");

    /* ========= COMPARAÇÃO DAS CARTAS ========= */
    printf("\n======== Comparação de Cartas =======\n");

    // Comparação da População (maior vence)
    if (populacao1 > populacao2)
    {
        printf("A cidade de %s tem a maior população\n", nome_cidade1);
    }
    else
    {
        printf("A cidade de %s tem a maior população\n", nome_cidade2);
    }

    // Comparação da Área (maior vence)
    if (area1 > area2)
    {
        printf("A cidade de %s tem a maior área\n", nome_cidade1);
    }
    else
    {
        printf("A cidade de %s tem a maior área\n", nome_cidade2);
    }

    // Comparação do PIB (maior vence)
    if (pib1 > pib2)
    {
        printf("A cidade de %s tem o maior PIB\n", nome_cidade1);
    }
    else
    {
        printf("A cidade de %s tem o maior PIB\n", nome_cidade2);
    }

    // Comparação dos Pontos Turísticos (maior vence)
    if (pontos_tur1 > pontos_tur2)
    {
        printf("A cidade de %s tem o maior número de Pontos Turísticos\n", nome_cidade1);
    }
    else
    {
        printf("A cidade de %s tem o maior número de Pontos Turísticos\n", nome_cidade2);
    }

    // Comparação da Densidade Populacional (menor vence)
    if (densidade1 < densidade2)
    {
        printf("A cidade de %s tem a menor Densidade Populacional\n", nome_cidade1);
    }
    else
    {
        printf("A cidade de %s tem a menor Densidade Populacional\n", nome_cidade2);
    }

    // Comparação do PIB per Capita (maior vence)
    if (pib_per_capita1 > pib_per_capita2)
    {
        printf("A cidade de %s tem o maior PIB per Capita\n", nome_cidade1);
    }
    else
    {
        printf("A cidade de %s tem o maior PIB per Capita\n", nome_cidade2);
    }

    printf("=====================================\n");

    /* ========= RESULTADO DETALHADO DA COMPARAÇÃO ========= */
    printf("\n===========================================\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("===========================================\n");
    printf("Carta 1 - %s (%s): %d hab\n", nome_cidade1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d hab\n", nome_cidade2, codigo2, populacao2);
    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    }
    printf("===========================================\n");

    return 0; // Indica que o programa terminou com sucesso
}