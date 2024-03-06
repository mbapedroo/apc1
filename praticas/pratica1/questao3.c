#include<stdio.h>

#define ICMS 0.17
#define COFINS 0.076
#define PIS_PASEP 0.0165

int main(){

float preco_inicial;
float preco_final;
  
  printf("Insira o preço inicial do produto:");
  scanf("%f", &preco_inicial);

  
float valor_imposto_icms = preco_inicial * ICMS;
float valor_imposto_cofins = preco_inicial * COFINS;
float valor_imposto_pis_pasep = preco_inicial * PIS_PASEP;

  
preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

    printf(" O valor do imposto ICMS é de %f \n", valor_imposto_icms);
    printf("O valor do imposto COFINS é de %f \n",valor_imposto_cofins);
    pritnf("O valor do imposto PIS_PASEP é de %f \n",valor_imposto_pis_pasep);
  
  
printf("O preço final do produto é de %f\n", preco_final);
  
  return 0;
}