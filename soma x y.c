/*Fazer um programa em C que leia um vetor de 12 posi��es
de inteiros e tamb�m leia dois valores x e y correspondentes
a duas posi��es no vetor. Ao final, escrever a soma dos
valores encontrados entre as respectivas posi��es x e y*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int vetor[12], c, x, y, resultado=0;
	
	for(c=0;c<=11;c++){
		printf("Digite o valor %d: ", c);
		scanf("%d", &vetor[c]);
	}
	printf("Escolha uma posicao entre 0 e 11: ");
	scanf("%d", &x);
	printf("Escolha uma posicao entre 0 e 11: ");
	scanf("%d", &y);
	
	for(c=x;c<=y;c++){
		resultado = resultado + vetor[c];
	}
	printf("Soma das posicoes x e y: %d", resultado);
}
