#include <stdio.h>

int main (){
    
    //Mensagem de boas Vindas ao jogo
    printf("Bem vindo ao jogo Super Trunfo! \n");
    printf("Cadastre duas cartas: \n");
    
    printf("Carta 1: \n");
    
    //Criando as variáveis que são solicitadas na primeira carta.
    char codigo[2];
    char estado[16];
    char cidade[20];
    int populacao;
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
    scanf("%d" , &populacao);

    printf("Digite a área da sua primeira carta em km²: ");
    scanf("%f" , &area);

    printf("Agora digite o PIB da sua primeira carta: ");
    scanf("%f" , &pib);

    printf("Por fim digite o números de pontos turísticos da sua primeria carta: ");
    scanf("%d" , &pontos_turisticos);

    //Exibindo ao usuário os dados da primeira carta, um por um, por linha.
    printf("Carta 1: \n");
    printf("Estado: %s\n" , estado);         
    printf("Código: %s\n" , codigo);
    printf("Cidade: %s\n" , cidade);
    printf("População: %d\n" , populacao);
    printf("Área: %f km²\n" , area);
    printf("PIB: %f\n" , pib);
    printf("Pontos turísticos: %d\n" , pontos_turisticos);

    //Criando as variáveis que são solicitadas na segunda carta.
    char codigo2[2];
    char estado2[16];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Pedindo ao usuário os dados que fazem parte da segunda carta com uma mensagem diferente para cada um, solicitando as informações.
    printf("Agora digite os valores da sua segunda carta em seguida: \n");
    
    printf("Digite o Estado da sua segunda carta: ");
    scanf("%s" , &estado2); 

    printf("Digite o código que representa sua segunda carta: ");
    scanf("%s" , &codigo2);

    printf("Digite o nome da cidade da sua segunda carta: ");
    scanf("%s" , &cidade2);

    printf("Agora digite a população da sua segunda carta: ");
    scanf("%d" , &populacao2);

    printf("Digite a área da sua segunda carta em km²: ");
    scanf("%f" , &area2);

    printf("Agora digite o PIB da sua segunda carta: ");
    scanf("%f" , &pib2);

    printf("Por fim digite o números de pontos turísticos da sua segunda carta: ");
    scanf("%d" , &pontos_turisticos2);

    //Exibindo ao usuário os dados da segunda carta, um por um, por linha.
    printf("Carta 2: \n");
    printf("Estado: %s\n" , estado2);         
    printf("Código: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área: %f km²\n" , area2);
    printf("PIB: %f\n" , pib2);
    printf("Pontos turísticos: %d\n" , pontos_turisticos2);

    return 0;
}
