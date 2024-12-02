## [Novo Campus](https://judge.beecrowd.com/pt/problems/view/2550)
Problema de grafos nível 8 da plataforma beecrowd | 2550

A Universidade Federal da República dos Pinheiros (UFRP) está construindo um novo campus na capital do país.

Neste momento, todos os N prédios do campus estão construídos e prontos para operar! Entretanto, ainda não foi construída nenhuma via ligando estes prédios. Hoje, é impossível sair de algum prédio e ir para outro prédio no campus!

Para resolver este problema, o reitor da UFRP quer construir vias entre pares de prédios do campus de tal forma que todos os prédios estejam conectados, isto é, de tal forma que, utilizando uma ou mais das vias construídas, seja possível sair de qualquer prédio e ir para qualquer outro no campus.

Entretanto, devido ao relevo complicado da capital, pode não ser possível construir uma via entre qualquer par de prédios. Dada a lista de vias que podem ser construídas e o custo de construção de cada via, determine se é possível tornar todos os prédios conectados e, em caso positivo, o custo total mínimo para construir as vias necessárias.

#### Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém dois inteiros N e M (2 ≤ N ≤ 1000, 0 ≤ M ≤ N(N-1)/2 ), o número de prédios no campus e de vias que podem ser construídas, respectivamente. Os prédios são numerados de 1 a N. As próximas M linhas descrevem as vias. Cada linha contém três inteiros A, B e C (1 ≤ A, B ≤ N, A≠B, 1 ≤ C ≤ 104), indicando a possibilidade de construção de uma via que liga os prédios A e B entre si e cuja construção custa C reais. É garantido que, para cada par de prédios, no máximo uma via pode ser construída entre eles.

A entrada termina com fim-de-arquivo (EOF).

#### Saída
Para cada caso de teste, caso não seja possível conectar todos os prédios, imprima uma linha contendo “impossivel” (sem aspas). Caso contrário, imprima uma linha contendo o custo mínimo necessário para conectar todos os prédios, em reais.