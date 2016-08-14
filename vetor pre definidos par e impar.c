/*fazer um programa em C que preencha um vetor de 20 posições
de inteiros com os seguintes valores constantes:-1,2,-3,4,5,6,-7,-8,9,-10
e apresente ao final, o vetor, a soma  dos números positivos e a soma
dos números negativos.*/

#include <stdio.h>

#include <stdlib.h>

main()
{
	int vet[10]={1,2,3,4,5,6,7,8,9,10}, c, somapar=0, somaimp=0;
	
	for (c=0; c<=9; c++)
	{
		if (vet[c] % 2 == 0)
		{
			somapar = somapar + vet[c];//variavel acumuladora
		}
		else
		{
			somaimp = somaimp + vet[c];
		}
				
	}
	for (c=0; c<=9; c++)
		printf ("%d ", vet[c]);
		
		printf ("\nSoma dos pares = %d\n", somapar);
		printf ("Soma dos impares = %d", somaimp);
}
