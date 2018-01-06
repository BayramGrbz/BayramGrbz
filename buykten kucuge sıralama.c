#include <stdio.h>
#include <stdlib.h>

/* Bayram Gürbüz */

int main(int argc, char *argv[]) 
{
	int dizi[100],kac,sanal;
	int i,j;
	
	printf("Kac Adete Sayi Girilecek: ");
	scanf("%d",&kac);
	printf("\n");
	
	for(i=0;i<kac;i++)
	{
		printf("%d. Sayi : ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<kac;i++)
	{
	for(j=0;j<kac;j++)
	{
		if(dizi[i]>=dizi[j])
		{
			sanal=dizi[i];
			dizi[i]=dizi[j];
			dizi[j]=sanal;
		}
		
	}
	}
	
	for(i=0;i<kac;i++)
	{
		printf("%d  ",dizi[i]);
	}
	
	return 0;
}
