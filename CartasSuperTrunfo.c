#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigo[40];
    char cidade [50];
    float populacao ;
    float area;
    float PIB;
    float Pontos;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc. 
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 
    printf("Desafio super triunfo\n");
    
    
    printf("Digite o estado:\n ");
    scanf(" %c", &estado);
    
    printf("Digite o código:\n ");
    scanf("%s", &codigo);
    
    printf("Digite o nome da cidade:\n ");
    scanf("%s", &cidade);
    
    printf("Digite a população:\n ");
    scanf("%f", &populacao); 
    
    printf("Digite a área em km²:\n");
    scanf("%f", &area );

    printf("Digite seu PIB:\n");
    scanf("%f", &PIB);

    
    printf("Digite o núemro de pontos turísticos:\n");
    scanf("%f", &Pontos);


    printf("SUA CARTA :");

    printf("Estado:%c - Código:%s - Nome da cidade: %s", estado, A01, cidade);
    printf("População: %f - Área: %f - PIB: %f", populacao, area, PIB);
    printf("Número de pontos turísticos: %f", Pontos);



     return 0; 



}
