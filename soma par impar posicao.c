/*Fazer um programa em C que preencha um vetor
de 15 números float e apresente a soma separadamente
dos valores de todas as posições pares e todas as
posições impares
1 2 4 8 11 3 5 12 9 1
1 2 3 4 5  6 7 8  9 10*/

#include <stdio.h>

#include <stdlib.h>

main()
{
	float vet[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}, par=0, impar=0;
	int c;
	
	for (c=0; c<=14; c++)
	{
		//p = c % 2;
		if (c % 2)
		{
			par = par + vet[c];
		}
		else
		{
			impar = impar + vet[c];
		}
	}
	for (c=0; c<=14; c++)
	printf ("%.2f\n", vet[c]);
	
	printf ("Soma das posicoes pares : %.2f\n", par);
	printf ("Soma das posicoes impares: %.2f", impar);
}
