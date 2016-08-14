#include <stdio.h>
#include <stdlib.h>
main ()
{
int l,c;
float a[3][3],b[3][3],d[3][3];
for (l=0;l<=2;l++){//controla as linhas
  	for (c=0;c<=2;c++)//controla as colunas
  	{
  	 printf("informe dois valores");
     scanf("%f%f",&a[l][c],&b[l][c]);
	 d[l][c]=a[l][c]+b[l][c];//soma das matrizes a e b       
    }
}

for (l=0;l<=2;l++){
printf("\n");
  	for (c=0;c<=2;c++)
  	{
        printf(" %0.2f ",a[l][c]);
        }
}
printf("\n");
for (l=0;l<=2;l++){
printf("\n");
  	for (c=0;c<=2;c++)
  	{
        printf(" %0.2f ",b[l][c]);
        }
}
printf("\n");
for (l=0;l<=2;l++){
printf("\n");
  	for (c=0;c<=2;c++)
  	{
        printf(" %0.2f ",d[l][c]);
        }
}
}

