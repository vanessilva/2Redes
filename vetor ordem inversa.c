/*Fazer um programa que leia um vetor de 15 posições
de inteiros. Escrever os elementos do vetor e após
escrever os elementos na ordem inversa*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int vetor[15], c;
	
	for(c=0;c<=14;c++){
		printf("Digite o numero %d: ", c);
		scanf("%d", &vetor[c]);
	}
	for(c=0;c<=14;c++){
		printf("%d ", vetor[c]);
	}
	printf("\n\n");
	for(c=14;c>=0;c--){
		printf("%d ", vetor[c]);
	}
}
