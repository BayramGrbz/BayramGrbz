#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int say[10];
	int i,toplam=0,sayort=0;
	
	for(i=0;i<10;i++)
	{
		printf("%d. Sayi: ",i+1);
		scanf("%d",&say[i]);
	}
	
	for(i=0;i<10;i++)
	{
		toplam=toplam+say[i];
	}
	
	printf("Girilen Sayilarin Toplami: %d",toplam);
	
	double ort= (double)toplam/10;
	
	printf("\nGirilen Sayilarin Ortalamasi : %.1f",ort);
	
	for(i=0;i<10;i++)
	{
		if((double)say[i]<=ort)
		{
			sayort++;
		}
	}
	
	printf("\nGirilen Sayilarin Ortalamasindan Buyuk Olan Sayi Sayisi : %d",sayort);
	
	return 0;
}
