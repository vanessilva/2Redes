/*Fazer umn programa em C que calcule a tabuada de 
um numero informado pelo usuário. Exibir o resultado
no formato de tabuada*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int numero, resultado, contador;
	
	printf ("Digite um numero: ");
	scanf ("%d", &numero);
	
	for (contador = 0; contador <= 10; contador = contador + 1)
	{
	    resultado = numero * contador;
        printf ("\n%d X %d = %d", numero, contador, resultado);
	}
}
