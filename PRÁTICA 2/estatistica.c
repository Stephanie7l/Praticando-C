/*==============================================================================
PRÁTICA 2: Crie uma função que retorna a função de densidade de 
probabilidade  para as funções Cauchy, Gumbel e Laplace.
Made by Stéphanie Pereira Barbosa on 03/04/2023
==============================================================================*/

#include <math.h>
#include "estatistica.h"

#define pi 3.141592

float CAUCHY(float x)
{
  return 1 / (pi * (1 + pow(x,2)));
}

float GUMBEL(float x, float mi, float beta)
{
  float z = (x - mi) / beta;
  return (1 / beta) * (exp(-(z + exp(-z))));
}

float LAPLACE(float x, float mi, float beta)
{
  return (1 / (2 * beta)) * (exp((-fabs(x - mi)) / beta));
}
