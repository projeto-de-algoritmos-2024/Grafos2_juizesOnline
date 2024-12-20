## [O Labirinto de Ninguém](https://judge.beecrowd.com/pt/problems/view/1850)
Problema de grafos nível 7 da plataforma beecrowd | 1850


Nunca tome uma das faces da Casa do Preto e Branco se você não é ‘Ninguém’, ainda que seja para matar Meryn Trant, ou você ficará cego, além de receber várias outras punições. Talvez você veja você mesmo se tornar ‘Ninguém’. Talvez seja isto que esteja acontecendo com Arya. Ou não. Fato é que agora ela está cega e foi colocada num labirinto cheio de portas trancadas. Você pode ajudá-la?

As fechaduras das portas presentes no labirinto onde está Arya são de 7 tipos: A, B, C, D, E, F e G. Há também algumas cópias de chaves espalhadas pelo labirinto, as quais podem ser dos tipos a, b, c, d, e, f ou g. Uma chave do tipo a abre uma porta do tipo A, uma chave do tipo b abre uma porta do tipo B etc. É claro que, uma vez que Arya tenha aberto uma porta com uma chave, a porta permanece aberta, e Arya pode levar a chave consigo para abrir tantas portas quantas quiser daquele tipo. No labirinto há exatamente uma saída: um buraco no chão através do qual Arya pode entrar no túnel que a conduzirá em segurança à saída da Casa do Preto e Branco.

#### Entrada
A entrada representa o labirinto e é composta por no máximo 100 linhas com no máximo 100 caracteres diferentes de fim de linha cada, e o número de caracteres por linha é sempre o mesmo. A posição onde Arya está é identificada pelo caractere @, a saída pelo caractere *, as paredes do labirinto são identificadas pelo caractere #, as portas por caracteres no conjunto {A, …, G}, as chaves por caracteres no conjunto {a, …, g}, e as demais posições livres pelo caractere . (ponto). O total de caracteres no labirinto diferentes de # e de . é no máximo 100, e há exatamente um caractere * e um caractere @. Arya sempre gasta 1 segundo para se mover de uma posição a outra, e só se move na horizontal ou na vertical, pois tem medo de bater o dedinho na quina de uma parede, já que as paredes são quadradas. A entrada termina em fim de arquivo.

#### Saída
Imprima uma linha contendo um único inteiro, o qual deve representar o tempo mínimo, em segundos, de que Arya precisa para deixar o labirinto. Se não é possível Arya deixar o labirinto, imprima uma linha contendo dois caracteres - (hífen), representando os olhos cerrados com que Arya precisará conviver até deixar de ser Arya.