# Prática 2

Um estatístico lhe procurou pois precisa de uma implementação em C de funções de densidade de probabilidade de três distribuições: Cauchy padrão, Gumbel e distribuição de Laplace.

## Parte 1

Crie uma função que retorna a função de densidade de probabilidade  para cada uma dessas distribuições, de acordo com as fórmulas abaixo.

### (a) Cauchy padrão:

![image](https://user-images.githubusercontent.com/100887395/184462844-66342f68-dca2-47d9-84e8-e58ecb9beae2.png)


### (b) Gumbel:

![image](https://user-images.githubusercontent.com/100887395/184462857-4283ee73-9ee9-4f28-b88c-b90a0292e4c3.png)
![image](https://user-images.githubusercontent.com/100887395/184462882-80ed201f-682d-4b1c-846b-59c532dda3e8.png)


### (c) Laplace:

![image](https://user-images.githubusercontent.com/100887395/184462893-26821029-ab5f-4cfc-a733-5dc960bedb4f.png)

Considere usar as funções exp(x) para calcular e^x e fabs(x) para calcular |x|, ambas funções encontradas na biblioteca math.h. 

Exemplos:
fabs(-5.3) retorna 5.3 
exp(3) retorna e^3

Além disso, considere que  ou então use a constante M_PI da biblioteca math.h. Por fim, note que além de , as funções podem ter outros parâmetros de entrada. A função densidade de probabilidade da distribuição de Laplace, por exemplo, tem como parâmetros de entrada ,  e .


## Parte 2

Crie e compile um módulo que contenha as funções estatísticas implementadas no exercício anterior.


## Parte 3

Implemente um programa que use o módulo criado do exercício anterior para calcular e exibir a função densidade de probabilidade nos seguintes pontos:

cauchy(x=-2) [resultado para conferência: 0.063662]

gumbel(x=0, $\mu$=0.5, $\beta$=2) [resultado para conferência: 0.177786]

laplace(x=-6, $\mu$=-5, $b$=4) [resultado para conferência: 0.097350]
