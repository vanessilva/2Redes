/*Fazer um programa em C que pesquise um n�mero
informado pelo usu�rio em um vetor de 10 posi��es
de inteiros. se o n� for encontrado, informar em qual
posi��o. Informar o n� e a posi��o*/

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
