#include <stdio.h>

int main (){
    
    //Mensagem de boas Vindas ao jogo
    printf("** Bem vindo ao jogo Super Trunfo! ** \n");
    printf("Cadastre duas cartas: \n");
    
    printf(" \n");

    printf("-Carta 1: \n");
    
    //Criando as variáveis que são solicitadas na primeira carta.
    char codigo[2];
    char estado[16];
    char cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //Pedindo ao usuário os dados que fazem parte da primeira carta com uma mensagem diferente para cada um, solicitando as informações.
    printf("Digite o Estado da sua primeira carta: ");
    scanf("%s" , &estado); 

    printf("Digite o código que representa sua primeira carta: ");
    scanf("%s" , &codigo);

    printf("Digite o nome da cidade da sua primeira carta: ");
    scanf("%s" , &cidade);

    printf("Agora digite a população da sua primeria carta: ");
    scanf("%u" , &populacao);

    printf("Digite a área da sua primeira carta em km²: ");
    scanf("%f" , &area);

    printf("Agora digite o PIB da sua primeira carta: ");
    scanf("%f" , &pib);

    printf("Por fim digite o números de pontos turísticos da sua primeria carta: ");
    scanf("%d" , &pontos_turisticos);

    float densidade = populacao / area;
    float capta = pib / populacao;

    printf(" \n");

    //Exibindo ao usuário os dados da primeira carta, um por um, por linha.
    printf("-- Carta 1 --\n");
    printf("Estado: %s\n" , estado);         
    printf("Código: %s\n" , codigo);
    printf("Cidade: %s\n" , cidade);
    printf("População: %u\n" , populacao);
    printf("Área: %.2f km²\n" , area);
    printf("PIB: %.2f\n" , pib);
    printf("Pontos turísticos: %d\n" , pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes por km²\n" , densidade);
    printf("PIB per capta: %.7f\n" , capta);

    //Criando as variáveis que são solicitadas na segunda carta.
    char codigo2[2];
    char estado2[16];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf(" \n");

    //Pedindo ao usuário os dados que fazem parte da segunda carta com uma mensagem diferente para cada um, solicitando as informações.
    printf("** Agora digite os valores da sua segunda carta em seguida: **\n");
    
    printf("Digite o Estado da sua segunda carta: ");
    scanf("%s" , &estado2); 

    printf("Digite o código que representa sua segunda carta: ");
    scanf("%s" , &codigo2);

    printf("Digite o nome da cidade da sua segunda carta: ");
    scanf("%s" , &cidade2);

    printf("Agora digite a população da sua segunda carta: ");
    scanf("%u" , &populacao2);

    printf("Digite a área da sua segunda carta em km²: ");
    scanf("%f" , &area2);

    printf("Agora digite o PIB da sua segunda carta: ");
    scanf("%f" , &pib2);

    printf("Por fim digite o números de pontos turísticos da sua segunda carta: ");
    scanf("%d" , &pontos_turisticos2);

    float densidade2 = populacao2 / area2;
    float capta2 = pib2 / populacao2;

    printf(" \n");

    //Exibindo ao usuário os dados da segunda carta, um por um, por linha.
    printf("-- Carta 2 --\n");
    printf("Estado: %s\n" , estado2);         
    printf("Código: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %u\n" , populacao2);
    printf("Área: %.2f km²\n" , area2);
    printf("PIB: %.2f\n" , pib2);
    printf("Pontos turísticos: %d\n" , pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km²\n" , densidade2);
    printf("PIB per capta: %.7f\n" , capta2);

    printf(" \n");

    //agora iniciar a parte de comparação das cartas
    
    //criando as variáveis de super poder
    unsigned long int superpoder = populacao + area + pib + pontos_turisticos + densidade + capta;
    unsigned long int superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade2 + capta2;
   
    //texto avisando que vai começar o jogo
    printf("!!Comparação das cartas!!\n");
    printf("** O número 1 irá representar a carta 1, o número 0 irá representar a carta 2 **\n");
    
    printf(" \n");

    //printando os resutlados jogo
    printf("Carta que tem a maior população: %d ganhou! \n" , populacao > populacao2);
    printf("Carta que tem a maior área: %d ganhou! \n" , area > area2);
    printf("Carta que tem o maior PIB: %d ganhou! \n" , pib > pib2);
    printf("Carta que tem mais pontos turísticos: %d ganhou! \n" , pontos_turisticos > pontos_turisticos2);
    printf("Carta que tem a menor densidade populacional: %d ganhou! \n" , densidade < densidade2);
    printf("Carta que tem o maior PIB per capta: %d ganhou! \n" , capta > capta2);
    printf("Carta que tem o maior Super Poder: %d ganhou! \n" , superpoder > superpoder2);

    printf(" \n");

    //encerrando o jogo
    printf("** Obrigado por Jogar ;) **");

    return 0;
}
