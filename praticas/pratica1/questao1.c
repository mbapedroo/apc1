#include<stdio.h>

int main(){

  float  nota1;
  float  nota2;

  printf("Insira o valor da nota na A1:");
  scanf("%f",&nota1);

  printf("Insira o valor da nota A2:");
  scanf("%f",&nota2);

  float mediafinal = (0.4 * nota1) + (0.6 * nota2);

  printf("A nota final é %f",mediafinal);




  return 0;
}