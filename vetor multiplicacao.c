/*FAzer um programa que leia dois vetores de 10 posi��es
de inteiros e fa�a a multilica��o dos elementos de mesmo
�ndice, colocando o resultado em outro vetor. Mostre todos
os vetores.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int vetor1[10], vetor2[10],resultado[10], c;
	
	for(c=0;c<=9;c++){
		printf("Digite o valor %d: ", c);
		scanf("%d", &vetor1[c]);
		printf("Digite o valor %d: ", c);
		scanf("%d", &vetor2[c]);
		resultado[c] = vetor1[c]*vetor2[c];
	}
	for(c=0;c<=9;c++){
		printf("\nResultado %d x %d = %d", vetor1[c], vetor2[c], resultado[c]);
	}
}
