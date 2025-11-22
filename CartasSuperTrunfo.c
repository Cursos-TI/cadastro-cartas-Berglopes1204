#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado;
    char Código;
    char cidade;
    int população;
    float Área;
    int PIB;
    int turistico;
  // Área para entrada de dados
    printf("Digite o Estado");
    scanf('%c', &Estado);

    printf("Digite o Código da cidade");
    scanf('%c', &Código);

    printf("Digite a Cidade");
    scanf('%c', &cidade);

    printf("Digite a quantidade da População");
    scanf('%d', &população);

    printf("Digite a Área em km");
    scanf('%f', &Área);

    printf("Digite o PIB");
    scanf('%d', &PIB);

    printf("Digite a quantidade de pontos turísticos");
    scanf('%d', &turistico);

  // Área para exibição dos dados da cidade

return 0;
} 
