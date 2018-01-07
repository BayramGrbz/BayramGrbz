#include <stdio.h>
#include <stdlib.h>

/* Bayram Gürbüz */

int main(int argc, char *argv[]) 
{
	int sayi,tut[50],i=0;
	printf("Sayi Gir: "); scanf("%d",&sayi);
	while(sayi>=1)
	{
		i++;
		tut[i]=sayi%2;
		sayi=sayi/2;
	}
	
	while(i>0)
	{
		printf("%d",tut[i]);
		i--;
	}
	return 0;
}
