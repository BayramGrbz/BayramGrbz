#include <stdio.h>
#include <stdlib.h>

/*Bayram Gürbüz tarafından kodlanmıstır.*/
void ebob()
{
	printf("\n EBOB ISLEMI BASLADI\n");
	printf("\n1. Sayiyi Girin: "); int ilk; scanf("%d",&ilk);
	printf("\n2. Sayiyi Girin: "); int iki; scanf("%d",&iki);
	
	int kck,i,sayi,crp=1;
	
	if(ilk>=iki)
	{
		kck=ilk;
	}
	else
	{
		kck=iki;
	}
	
	for(i=2;i<=kck;i++)
	{
		gel:
			
		if(ilk%i==0&&iki%i==0)
		{
			sayi=i;
			crp=crp*sayi;
			
			if(ilk%i==0)
			{
				ilk=ilk/i;
			}
			
			if(iki%i==0)
			{
				iki=iki/i;
			}
			
			if(ilk%i==0||iki%i==0)
			{
				goto gel;
			}
			
			
		}

	}
	
	printf("\nEBOB %d\n",crp);
	getch();

}




void ekok()
{
	printf("\n EKOK ISLEMI BASLADI\n");
	printf("\n1. Sayiyi Girin: "); int ilk; scanf("%d",&ilk);
	printf("\n2. Sayiyi Girin: "); int iki; scanf("%d",&iki);
	
	int byk,i,sayi,crp=1;
	
	if(ilk>=iki)
	{
		byk=ilk;
	}
	else
	{
		byk=iki;
	}
	
	for(i=2;i<=byk;i++)
	{
		gel:
			
		if(ilk%i==0||iki%i==0)
		{
			sayi=i;
			crp=crp*sayi;
			
			if(ilk%i==0)
			{
				ilk=ilk/i;
			}
			
			if(iki%i==0)
			{
				iki=iki/i;
			}
			
			if(ilk%i==0||iki%i==0)
			{
				goto gel;
			}
			
			
		}

	}
	
	printf("\nEKOK %d\n",crp);
	getch();

}
	

int main(int argc, char *argv[]) 
{
	char gir;
	int tus=0;
	int ilk;
	int iki;
	git:
	printf("\t**********EKOK-EBOB**********\n\n");
	printf("\n\t\tEBOB----(1)\n");
	printf("\n\t\tEKOK----(2)\n");
	printf("\n\tYapmak Istediginiz Islemi Girin:\n\n");
	gir=getch();
	
	if(tus<3)
	{
		tus++;
		
		if(gir=='1')
		{
			ebob();
		}
	
		else if(gir=='2')
		{
			ekok();
		}
	
		else
		{
		system("cls");
		printf("\n\t\a %d.HATALI GIRIS TEKRAR DENEYIN!!!\n\n\n",tus);
		goto git;
		}
	
	}
	
	else
	{
		printf("\n\t\a* Cok Sayida Hatali Giris Yaptiniz. *\n");
		getch();
	}
	
	return 0;
}
