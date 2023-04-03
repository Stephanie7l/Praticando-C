/*==============================================================================
PRÁTICA 2: Implemente um programa que use o módulo criado no exercício para 
calcular e exibir a função densidade de probabilidade nos seguintes pontos:
     cauchy(x=-2) [resultado para conferência: 0.063662]
     gumbel(x=0, $\mu$=0.5, $\beta$=2) [resultado para conferência: 0.177786]
     laplace(x=-6, $\mu$=-5, $b$=4) [resultado para conferência: 0.097350]
Made by Stéphanie Pereira Barbosa on 03/04/2023
==============================================================================*/

#include <stdio.h>
#include "estatistica.h"

int main() 
{
  printf("Cauchy: f(-2) = %f", CAUCHY(-2));
  printf("\n");
  printf("Gumbel: f(0, 0.5, 2) = %f", GUMBEL(0, 0.5, 2));
  printf("\n");
  printf("Laplace: f(-6, -5, 4) = %f", LAPLACE(-6, -5, 4));
  
  return 0;
}
