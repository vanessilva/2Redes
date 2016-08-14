/*Fazer um programa em C que pesquise um número
informado pelo usuário em um vetor de 10 posições
de inteiros. se o n° for encontrado, informar em qual
posição. Informar o n° e a posição*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int vet[10]={5,2,8,7,1,3,6,8,9,10}, c, numero;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	
	for (c=0; c<=9; c++)
	{
		if (numero == vet[c])
		{
			printf ("\nnumero: %d e posicao %d", numero, c);
		}
				
	}
		
}
