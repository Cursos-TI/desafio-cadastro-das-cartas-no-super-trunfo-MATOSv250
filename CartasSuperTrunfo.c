#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char opcoes, A , B ;
    char Cartas, A01[40];
    char Estados [50];
    int populacao;
    float area;
    float PIB;
    int Pontos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    printf("Desafio super triunfo\n");

    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Escolha sua carta\n");
     scanf("%s",opcoes);
    
    // Exibição dos Dados das Cartas:
    printf("Estado: %c \n - Código: \n", A );
    

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    printf("Código da carta: %s \n", A01);
   
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %s \n",Estados );
    ;
    
    printf("População: %f \n", 12325000);
    
    
    printf("Área em km²:%f \n", 1521.11 );
    
    
    printf("PIB: %f \n", 699.28 );
    
    
    printf("Número de pontos turísticos: %f \n", 50);
   

    printf("Escolha sua carta: %s - Cartas: %s", opcoes, Cartas);
    
     return 0; 



}
