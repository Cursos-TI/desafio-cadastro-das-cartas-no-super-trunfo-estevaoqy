#include <stdio.h>

int main() {
  
    char estado [10];
    char codigo_da_carta [5];
    char cidade [20];
    int populacao;
    int pontos_turisticos;
    float pib;
    float area;
    
       printf("digite o estado: \n");
       scanf("%s", &estado);

       printf("codigo: \n");
       scanf("%s", &codigo_da_carta);
   
       printf("nome da cidade: \n");
       scanf("%s", &cidade);
   
       printf("total de habitantes: \n");
       scanf("%d", &populacao);
   
       printf("Area: \n");
       scanf("%f", &area);
   
       printf("pib: \n");
       scanf("%f", &pib);
   
       printf("Quantidade de pontos turisticos: \n");
       scanf("%d", &pontos_turisticos);
   
   
       printf("carta 1! \n");
       printf("estado: %s \n", estado);
       printf("codigo da carta: %s%s \n", estado, codigo_da_carta);
       printf("cidade: %s \n", cidade);
       printf("habitantes: %d \n", populacao);
       printf("Area: %f \n", area);
       printf("pib: %f \n", pib);
       printf("pontos turisticos: %i \n", pontos_turisticos);
       
      
       return 0;
   }