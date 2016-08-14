/*Fazer um programa em C que dada a matriz de inteiros
 m 3x3, calcule a média aritmética de todos os seus
 números pares*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int l,c, m[3][3], qtd=0, valor=0, media=0, r=0;
	for (l=0;l<=2;l++)//controla as linhas
	{
  	for (c=0;c<=2;c++)//controla as colunas
  	{
  		printf("informe dois valores: ");
     	scanf("%d",&m[l][c]);
     	r = m[l][c] % 2;
     	if (r == 0)
     		qtd++;
    	if (r == 0)
    		valor = valor + m[l][c];
	}
	}
	media = valor / qtd;
	printf ("A media eh: %d", media);
}
