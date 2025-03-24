/*
 * Desafio Super Trunfo - Cidades
 * Tema 2 - Comparando Cartas do Super Trunfo
 * Desafio: nível mestre
 */

 #include <stdio.h>    // Para entrada/saída
 #include <string.h>   // Para manipulação de strings (ex.: strcspn)
 
 int main() {
 
     // ======================= VARIÁVEIS DA CARTA 1 =======================
     char estado1;                  // Estado da Carta 1 (A-H)
     char codigo1[4];               // Código da Carta 1 (ex: "A01")
     char nome_cidade1[50];         // Nome da Cidade da Carta 1
     int populacao1;                // População da Carta 1
     float area1;                   // Área da Carta 1 (em km²)
     float pib1;                    // PIB da Carta 1
     int pontos_tur1;               // Número de Pontos Turísticos da Carta 1
     float densidade1;              // Densidade Populacional da Carta 1 (população / área)
     float pib_per_capita1;         // PIB per Capita da Carta 1 (PIB / população)
 
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
 
     // Limpa o buffer para leitura de strings com espaços
     getchar();
 
     // Nome da Cidade
     printf("Digite o nome da cidade (Carta 1): ");
     fgets(nome_cidade1, 50, stdin);
     nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';  // Remove o '\n'
 
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
 
     // ======================= MENU INTERATIVO PARA ESCOLHA DE DOIS ATRIBUTOS =======================
     int escolha1, escolha2;  // Variáveis para armazenar as escolhas dos atributos
 
     // Menu do primeiro atributo
     printf("\n======== MENU DE COMPARAÇÃO - PRIMEIRO ATRIBUTO ========\n");
     printf("Escolha um atributo para comparar:\n");
     printf("1 - População\n");
     printf("2 - Área\n");
     printf("3 - PIB\n");
     printf("4 - Número de Pontos Turísticos\n");
     printf("5 - Densidade Populacional\n");
     printf("6 - PIB per Capita\n");
     printf("Digite sua opção: ");
     scanf("%d", &escolha1);
 
     // Menu do segundo atributo (exclui a opção já escolhida)
     printf("\n======== MENU DE COMPARAÇÃO - SEGUNDO ATRIBUTO ========\n");
     printf("Escolha um segundo atributo (diferente do primeiro):\n");
     if (escolha1 != 1) printf("1 - População\n");
     if (escolha1 != 2) printf("2 - Área\n");
     if (escolha1 != 3) printf("3 - PIB\n");
     if (escolha1 != 4) printf("4 - Número de Pontos Turísticos\n");
     if (escolha1 != 5) printf("5 - Densidade Populacional\n");
     if (escolha1 != 6) printf("6 - PIB per Capita\n");
     printf("Digite sua opção: ");
     scanf("%d", &escolha2);
 
     // Validação simples: se o mesmo atributo foi escolhido duas vezes, encerra o programa
     if (escolha1 == escolha2) {
         printf("\nErro: Não é possível escolher o mesmo atributo duas vezes. Reinicie o programa.\n");
         return 1;
     }
 
     // ======================= DECLARAÇÃO DE VARIÁVEIS PARA OS VALORES DOS ATRIBUTOS ESCOLHIDOS =======================
     // Para cada atributo escolhido, armazenaremos os valores para as duas cartas (convertidos para float, se necessário)
     float valorA1_c1 = 0, valorA1_c2 = 0;  // Valores do primeiro atributo para Carta 1 e Carta 2
     float valorA2_c1 = 0, valorA2_c2 = 0;  // Valores do segundo atributo para Carta 1 e Carta 2
 
     // ======================= OBRIGATÓRIO: ATRIBUIÇÃO DOS VALORES DO PRIMEIRO ATRIBUTO =======================
     switch(escolha1) {
         case 1: // População
             valorA1_c1 = (float)populacao1;
             valorA1_c2 = (float)populacao2;
             printf("\nComparação do primeiro atributo: População\n");
             printf("Carta 1 - %s (%s): %d hab\n", nome_cidade1, codigo1, populacao1);
             printf("Carta 2 - %s (%s): %d hab\n", nome_cidade2, codigo2, populacao2);
             break;
         case 2: // Área
             valorA1_c1 = area1;
             valorA1_c2 = area2;
             printf("\nComparação do primeiro atributo: Área\n");
             printf("Carta 1 - %s (%s): %.2f km2\n", nome_cidade1, codigo1, area1);
             printf("Carta 2 - %s (%s): %.2f km2\n", nome_cidade2, codigo2, area2);
             break;
         case 3: // PIB
             valorA1_c1 = pib1;
             valorA1_c2 = pib2;
             printf("\nComparação do primeiro atributo: PIB\n");
             printf("Carta 1 - %s (%s): R$ %.2f\n", nome_cidade1, codigo1, pib1);
             printf("Carta 2 - %s (%s): R$ %.2f\n", nome_cidade2, codigo2, pib2);
             break;
         case 4: // Número de Pontos Turísticos
             valorA1_c1 = (float)pontos_tur1;
             valorA1_c2 = (float)pontos_tur2;
             printf("\nComparação do primeiro atributo: Número de Pontos Turísticos\n");
             printf("Carta 1 - %s (%s): %d\n", nome_cidade1, codigo1, pontos_tur1);
             printf("Carta 2 - %s (%s): %d\n", nome_cidade2, codigo2, pontos_tur2);
             break;
         case 5: // Densidade Populacional – para comparação individual, menor vence;
                 // para soma, usamos o inverso (1/densidade) para que valor maior seja melhor.
             valorA1_c1 = 1.0f / densidade1;
             valorA1_c2 = 1.0f / densidade2;
             printf("\nComparação do primeiro atributo: Densidade Populacional\n");
             printf("Carta 1 - %s (%s): %.2f hab/km2\n", nome_cidade1, codigo1, densidade1);
             printf("Carta 2 - %s (%s): %.2f hab/km2\n", nome_cidade2, codigo2, densidade2);
             break;
         case 6: // PIB per Capita
             valorA1_c1 = pib_per_capita1;
             valorA1_c2 = pib_per_capita2;
             printf("\nComparação do primeiro atributo: PIB per Capita\n");
             printf("Carta 1 - %s (%s): R$ %.2f\n", nome_cidade1, codigo1, pib_per_capita1);
             printf("Carta 2 - %s (%s): R$ %.2f\n", nome_cidade2, codigo2, pib_per_capita2);
             break;
         default:
             printf("\nOpção inválida para o primeiro atributo!\n");
             return 1;
     }
 
     // ======================= OBRIGATÓRIO: ATRIBUIÇÃO DOS VALORES DO SEGUNDO ATRIBUTO =======================
     switch(escolha2) {
         case 1: // População
             valorA2_c1 = (float)populacao1;
             valorA2_c2 = (float)populacao2;
             printf("\nComparação do segundo atributo: População\n");
             printf("Carta 1 - %s (%s): %d hab\n", nome_cidade1, codigo1, populacao1);
             printf("Carta 2 - %s (%s): %d hab\n", nome_cidade2, codigo2, populacao2);
             break;
         case 2: // Área
             valorA2_c1 = area1;
             valorA2_c2 = area2;
             printf("\nComparação do segundo atributo: Área\n");
             printf("Carta 1 - %s (%s): %.2f km2\n", nome_cidade1, codigo1, area1);
             printf("Carta 2 - %s (%s): %.2f km2\n", nome_cidade2, codigo2, area2);
             break;
         case 3: // PIB
             valorA2_c1 = pib1;
             valorA2_c2 = pib2;
             printf("\nComparação do segundo atributo: PIB\n");
             printf("Carta 1 - %s (%s): R$ %.2f\n", nome_cidade1, codigo1, pib1);
             printf("Carta 2 - %s (%s): R$ %.2f\n", nome_cidade2, codigo2, pib2);
             break;
         case 4: // Número de Pontos Turísticos
             valorA2_c1 = (float)pontos_tur1;
             valorA2_c2 = (float)pontos_tur2;
             printf("\nComparação do segundo atributo: Número de Pontos Turísticos\n");
             printf("Carta 1 - %s (%s): %d\n", nome_cidade1, codigo1, pontos_tur1);
             printf("Carta 2 - %s (%s): %d\n", nome_cidade2, codigo2, pontos_tur2);
             break;
         case 5: // Densidade Populacional
             valorA2_c1 = 1.0f / densidade1;
             valorA2_c2 = 1.0f / densidade2;
             printf("\nComparação do segundo atributo: Densidade Populacional\n");
             printf("Carta 1 - %s (%s): %.2f hab/km2\n", nome_cidade1, codigo1, densidade1);
             printf("Carta 2 - %s (%s): %.2f hab/km2\n", nome_cidade2, codigo2, densidade2);
             break;
         case 6: // PIB per Capita
             valorA2_c1 = pib_per_capita1;
             valorA2_c2 = pib_per_capita2;
             printf("\nComparação do segundo atributo: PIB per Capita\n");
             printf("Carta 1 - %s (%s): R$ %.2f\n", nome_cidade1, codigo1, pib_per_capita1);
             printf("Carta 2 - %s (%s): R$ %.2f\n", nome_cidade2, codigo2, pib_per_capita2);
             break;
         default:
             printf("\nOpção inválida para o segundo atributo!\n");
             return 1;
     }
 
     // ======================= COMPARAÇÃO INDIVIDUAL DE CADA ATRIBUTO =======================
     // Para cada atributo escolhido, o vencedor é aquele com maior valor (exceto Densidade,
     // onde usamos 1/densidade, de modo que o valor maior indica menor densidade).
     printf("\n========== RESULTADO INDIVIDUAL DAS COMPARAÇÕES ==========\n");
     
     // Primeiro atributo
     printf("\n-- Primeiro Atributo --\n");
     if (escolha1 == 5) {  // Densidade: menor vence, mas usamos 1/densidade, então maior valor vence
         printf("Comparação (Densidade Populacional):\n");
     }
     // Exibe os valores já impressos nos menus anteriores (opcional, pois já foram mostrados)
     // Determina o vencedor usando operador ternário:
     printf("Resultado: Carta %s (%s) venceu!\n", 
            (valorA1_c1 > valorA1_c2 ? nome_cidade1 : (valorA1_c1 < valorA1_c2 ? nome_cidade2 : "Empate")),
            (valorA1_c1 > valorA1_c2 || valorA1_c1 < valorA1_c2 ? "" : ""));
     
     // Segundo atributo
     printf("\n-- Segundo Atributo --\n");
     if (escolha2 == 5) {
         printf("Comparação (Densidade Populacional):\n");
     }
     printf("Resultado: Carta %s (%s) venceu!\n", 
            (valorA2_c1 > valorA2_c2 ? nome_cidade1 : (valorA2_c1 < valorA2_c2 ? nome_cidade2 : "Empate")),
            (valorA2_c1 > valorA2_c2 || valorA2_c1 < valorA2_c2 ? "" : ""));
     
     // ======================= SOMA DOS VALORES DOS ATRIBUTOS E RESULTADO FINAL =======================
     // Para a soma, usamos os valores já atribuídos (para densidade, já usamos 1/densidade)
     float soma_carta1 = valorA1_c1 + valorA2_c1;
     float soma_carta2 = valorA1_c2 + valorA2_c2;
     
     printf("\n========== RESULTADO FINAL DA RODADA ==========\n");
     printf("Soma dos valores dos atributos escolhidos:\n");
     printf("Carta 1 - %s (%s): %.2f\n", nome_cidade1, codigo1, soma_carta1);
     printf("Carta 2 - %s (%s): %.2f\n", nome_cidade2, codigo2, soma_carta2);
     
     // Determina o vencedor pela soma dos atributos
     if (soma_carta1 > soma_carta2) {
         printf("Resultado Final: Carta 1 - A cidade %s venceu a rodada!\n", nome_cidade1);
     } else if (soma_carta1 < soma_carta2) {
         printf("Resultado Final: Carta 2 - A cidade %s venceu a rodada!\n", nome_cidade2);
     } else {
         printf("Resultado Final: Empate!\n");
     }
     
     printf("\n============ Fim do Jogo ============\n");
     return 0; // Indica que o programa terminou com sucesso
 } 