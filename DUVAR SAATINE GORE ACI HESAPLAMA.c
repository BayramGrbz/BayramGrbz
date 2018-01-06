#include <stdio.h>
#include <stdlib.h>

/* Bayram Gürbüz */

int saatcevir(int saat)
{
		switch(saat)
	{
		case 13: saat=1;
		break;
		case 14: saat=2;
		break;
		case 15: saat=3;
		break;
		case 16: saat=4;
		break;
		case 17: saat=5;
		break;
		case 18: saat=6;
		break;
		case 19: saat=7;
		break;
		case 20: saat=8;
		break;
		case 21: saat=9;
		break;
		case 22: saat=10;
		break;
		case 23: saat=11;
		break;
		case 24: saat=0;
		break;
	}
	return saat;
}




int main(int argc, char *argv[]) 
{
	//
	int saat,dakika;
	double acidakika,acisaat,aci;
	//
	printf("\n***DUVAR SAATINE GORE ACI HESAPLAMA ISLEMI***\n");
	//
	git:
	//
	
	//
	printf("\nSaati Giriniz: "); scanf("%d",&saat);
	if(saat>24)
	{
		system("cls");
		printf("\nHATALI GIRIS!\n");
		goto git;
	}
	printf("\nDakikayi Giriniz: "); scanf("%d",&dakika);
	if(dakika>59)
	{
		system("cls");
		printf("\nHATALI GIRIS!\n");
		goto git;
	}
	
	if(saat>12&&saat<=24)
	{
		saat=saatcevir(saat);
	}
	//
	
	//
	acisaat=saat*30;
	acidakika=dakika*6;
	acidakika=acidakika-acidakika*0.0833333333333333; //HASSASİYET AMACLİ
	aci=acisaat-acidakika;
	//
	
	//
	if(aci<0)
	{
		aci=aci*-1;
	}
	
	if(aci>180)
	{
		aci=360-aci;
	}
	//
	
	//

	printf("\nAkrep Ile Yelkovan Arasindaki Dar Aci: %.1f\n",aci);
	goto git; //deneme amacli test asamasında gir cik olmasın
	//
	
	return 0;
}
