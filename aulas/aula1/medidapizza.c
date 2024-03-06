#include<stdio.h>

int main(){

  float pi = 3.14;
  float raio = 0.0;

  printf("insira o valor do raio da pizza:");
  scanf("%f",&raio);

  float areadapizza= pi*raio*raio;

  printf("A area da pizzza é %f\n",areadapizza);
  

  

  return 0;
}