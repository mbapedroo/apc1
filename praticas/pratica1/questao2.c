#include<stdio.h>

int main(){

unsigned int altura;
unsigned int base;
unsigned int area;
  
printf("Qual a altura do triângulo?");
  scanf("%i", &altura);

printf("Qual a base do triângulo?");
  scanf("%i", &base);
  
area = (altura * base) / 2 ;

  printf("A área do triãngulo é de %i \n", area);

  
  return 0;
}         