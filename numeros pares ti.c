#include <stdlib.h>
#include <stdio.h>

main()
{
	int vetor[6], c;
	
	for(c=0;c<=5;c++){
		printf("Digite o valor %d: ", c);
		scanf("%d", &vetor[c]);
	}
	for(c=0;c<=5;c++){
		if(vetor[c]%2==0){
			printf("%d ", vetor[c]);
		}
	}
	printf("\n\n");
	for(c=0;c<=5;c++){
		if(vetor[c]%2>0){
			printf("%d ", vetor[c]);
		}
	}
}


// 300 - (300 * 0.75)
