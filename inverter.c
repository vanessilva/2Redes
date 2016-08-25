#include <stdio.h>
#include <stdlib.h>

main()
{
	int vetor[6], c;
	
	for(c=0;c<=5;c++){
		printf("Digite o valor %d: ", c);
		scanf("%d", &vetor[c]);
	}
	
	
	for(c=0;c<=5;c++){
		printf("%d ", vetor[c]);
		printf("%d ", vetor[5 - c]);
		printf("\n");
	}
	
	
}
