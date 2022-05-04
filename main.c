#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,cont,primos=0;
	x=100;
	cont=0;

	for(i=2;i<=100;i++){

		for(x=2;x<=i;x++)

		if(i%x==0)
		cont++;

		if(cont==1){
		printf("%d-",i);
		primos++;
		}
		cont = 0 ;
	}
    printf("\nLa cantidad de primos es de %d\n",primos);

    return 0;
}
