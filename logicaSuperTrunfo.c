/*
 * Desafio Super Trunfo - Cidades
 * Tema 2 - Comparando Cartas do Super Trunfo
 * Desafio: nível novato com adição do nível aventureiro (menu interativo)
 */

 #include <stdio.h>    // Para entrada/saída
 #include <string.h>   // Para funções de manipulação de strings (ex.: strcspn)
 
 int main() {

     // ======================= VARIÁVEIS DA CARTA 1 =======================
     char estado1;                  // Estado da Carta 1 (A-H)
     char codigo1[4];               // Código da Carta 1 (ex: "A01")
     char nome_cidade1[50];         // Nome da Cidade da Carta 1
     int populacao1;                // População da Carta 1
     float area1;                   // Área da Carta 1 (em km²)
     float pib1;                    // PIB da Carta 1
     int pontos_tur1;               // Número de Pontos Turísticos da Carta 1
     float densidade1;              // Densidade Populacional (população / área) da Carta 1
     float pib_per_capita1;         // PIB per Capita (PIB / população) da Carta 1
 
     // ======================= VARIÁVEIS DA CARTA 2 =======================
     char estado2;                  // Estado da Carta 2 (A-H)
     char codigo2[4];               // Código da Carta 2 (ex: "A02")
     char nome_cidade2[50];         // Nome da Cidade da Carta 2
     int populacao2;                // População da Carta 2
     float area2;                   // Área da Carta 2 (em km²)
     float pib2;                    // PIB da Carta 2
     int pontos_tur2;               // Número de Pontos Turísticos da Carta 2
     float densidade2;              // Densidade Populacional da Carta 2
     float pib_per_capita2;         // PIB per Capita da Carta 2
 
     // ======================= MENSAGEM DE BOAS-VINDAS =======================
     printf("Bem vindo ao Super Trunfo Cidades\n");
     printf("-----------------------------------\n");
 
     // ======================= LEITURA DOS DADOS DA CARTA 1 =======================
     printf("\nDigite os dados da Carta 1:\n");
 
     // Estado
     printf("Digite a letra do Estado (A-H) da Carta 1: ");
     scanf(" %c", &estado1);
 
     // Código
     printf("Digite o código da Carta 1 (ex: A01): ");
     scanf("%s", codigo1);
 
     // Limpa o buffer para a leitura de strings com espaços
     getchar();
 
     // Leitura do Nome da Cidade
     printf("Digite o nome da cidade (Carta 1): ");
     fgets(nome_cidade1, 50, stdin);
     nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';  // Remove o '\n' do final
 
     // População
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
 
     // --------------------- CÁLCULOS PARA A CARTA 1 ---------------------
     densidade1 = (float)populacao1 / area1;         // Densidade = população / área
     pib_per_capita1 = pib1 / (float)populacao1;       // PIB per Capita = PIB / população
 
     // ======================= LEITURA DOS DADOS DA CARTA 2 =======================
     printf("\nDigite os dados da Carta 2:\n");
 
     // Estado
     printf("Digite a letra do Estado (A-H) da Carta 2: ");
     scanf(" %c", &estado2);
 
     // Código
     printf("Digite o código da Carta 2 (ex: A02): ");
     scanf("%s", codigo2);
 
     // Limpa o buffer
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
 
     // --------------------- CÁLCULOS PARA A CARTA 2 ---------------------
     densidade2 = (float)populacao2 / area2;
     pib_per_capita2 = pib2 / (float)populacao2;
 
     // ======================= EXIBIÇÃO DOS DADOS DAS CARTAS =======================
     printf("\n======= Super Trunfo Cidades =======\n");
 
     // Exibição da Carta 1
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
 
     // Exibição da Carta 2
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
 
     // ======================= MENU INTERATIVO PARA COMPARAÇÃO =======================
     int opcao;                  // Opção de escolha no menu (0-5)

     printf("\n======== MENU DE COMPARAÇÃO =========\n");
     printf("Escolha o atributo para comparar:\n");
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Número de Pontos Turísticos\n");
     printf("5 - Densidade Populacional (menor vence)\n");
     printf("0 - Sair\n");       // A opção 0 encerra a comparação
     printf("Digite sua opção: ");
     scanf("%d", &opcao);
 
     /* ======================= COMPARAÇÃO COM SWITCH E IF/ELSE =======================
      * Cada case verifica o atributo escolhido e compara os valores das duas cartas.
      * São exibidos:
      *  - O nome e código de cada carta, juntamente com o valor do atributo comparado.
      *  - O resultado da comparação, indicando qual carta venceu ou se houve empate.
      */
     switch(opcao) {
         case 1: { // Comparação: População (maior vence)
             printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
             printf("Carta 1 - %s (%s): %d hab\n", nome_cidade1, codigo1, populacao1);
             printf("Carta 2 - %s (%s): %d hab\n", nome_cidade2, codigo2, populacao2);
             if (populacao1 > populacao2) {
                 printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
             } else if (populacao1 < populacao2) {
                 printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
             } else {
                 printf("Resultado: Empate!\n");
             }
             break;
         }
         case 2: { // Comparação: Área (maior vence)
             printf("\n=== Comparação de Cartas (Atributo: Área) ===\n");
             printf("Carta 1 - %s (%s): %.2f km2\n", nome_cidade1, codigo1, area1);
             printf("Carta 2 - %s (%s): %.2f km2\n", nome_cidade2, codigo2, area2);
             if (area1 > area2) {
                 printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
             } else if (area1 < area2) {
                 printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
             } else {
                 printf("Resultado: Empate!\n");
             }
             break;
         }
         case 3: { // Comparação: PIB (maior vence)
             printf("\n=== Comparação de Cartas (Atributo: PIB) ===\n");
             printf("Carta 1 - %s (%s): R$ %.2f\n", nome_cidade1, codigo1, pib1);
             printf("Carta 2 - %s (%s): R$ %.2f\n", nome_cidade2, codigo2, pib2);
             if (pib1 > pib2) {
                 printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
             } else if (pib1 < pib2) {
                 printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
             } else {
                 printf("Resultado: Empate!\n");
             }
             break;
         }
         case 4: { // Comparação: Número de Pontos Turísticos (maior vence)
             printf("\n=== Comparação de Cartas (Atributo: Pontos Turísticos) ===\n");
             printf("Carta 1 - %s (%s): %d\n", nome_cidade1, codigo1, pontos_tur1);
             printf("Carta 2 - %s (%s): %d\n", nome_cidade2, codigo2, pontos_tur2);
             if (pontos_tur1 > pontos_tur2) {
                 printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
             } else if (pontos_tur1 < pontos_tur2) {
                 printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
             } else {
                 printf("Resultado: Empate!\n");
             }
             break;
         }
         case 5: { // Comparação: Densidade Populacional (MENOR vence)
             printf("\n=== Comparação de Cartas (Atributo: Densidade Populacional) ===\n");
             printf("Carta 1 - %s (%s): %.2f hab/km2\n", nome_cidade1, codigo1, densidade1);
             printf("Carta 2 - %s (%s): %.2f hab/km2\n", nome_cidade2, codigo2, densidade2);
             if (densidade1 < densidade2) {
                 printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
             } else if (densidade1 > densidade2) {
                 printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
             } else {
                 printf("Resultado: Empate!\n");
             }
             break;
         }
         case 0: { // Opção para sair
             printf("\nEncerrando a comparação. Obrigado por jogar!\n");
             break;
         }
         default: { // Caso a opção não seja válida
             printf("\nOpção inválida! Por favor, reinicie o programa e escolha uma opção válida.\n");
             break;
         }
     }
 
     printf("\n============ Fim do Jogo ============\n");
     return 0; // Finaliza o programa com sucesso
 }