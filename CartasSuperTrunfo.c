#include <stdio.h>

int main (){

    char estado[20];
    char código[2];
    char cidade[20];
    int população;
    float área;
    float PIB;
    int pontos_turísticos;
    
    printf("Bem vindo ao jogo Suepr Trunfo! \n");
    printf("Cadastre duas cartas: \n");
    
    printf("Carta 1: \n");
    
    printf("Digite o Estado da sua primeira carta: ");
    scanf("%s" , estado);

    printf("Digite o código que representa sua primeira carta: ");
    scanf("%s" , código);

    printf("Digite o nome da cidade da sua primeira carta: ");
    scanf("%s" , cidade);

    printf("Agora digite a população da sua primeria carta: ");
    scanf("%d" , &população);

    printf("Digite a área da sua primeira carta em km²: ");
    scanf("%f" , &área);

    printf("Agora digite o PIB da sua primeira carta: ");
    scanf("%f" , &PIB);

    printf("Por fim digite o números de pontos turísticos da sua primeria carta: ");
    scanf("%d" , &pontos_turísticos);


    printf("Carta 1: \n");
    printf("Estado: %s\n" , estado);
    printf("Código: %s\n" , código);
    printf("Cidade: %s\n" , cidade);
    printf("População: %d\n" , &população);
    printf("Área: %f km²\n" , &área);
    printf("PIB: %f\n" , &PIB);
    printf("Pontos Turísticos: %d\n" , &pontos_turísticos);




}
