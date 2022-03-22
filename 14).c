#include<stdio.h>
unsigned long long int sayi;
unsigned long long int sayac =1;
unsigned long long int gecici_sayi;
unsigned long long int en_uzun_zincirli_sayi=0;
unsigned long long int en_uzun_zincirli_sayi_sayaci=0;
int main(){
for(sayi=999999;sayi>=2;sayi--){
	sayac =1;
	gecici_sayi=sayi;
	printf("sayi = %llu 	",sayi);
	
	while(gecici_sayi != 1){
	if(gecici_sayi %2 ==0)
	{
		gecici_sayi = gecici_sayi / 2;
		sayac++;
	}
	else if (gecici_sayi %2 == 1  ){
	
		gecici_sayi = gecici_sayi * 3 + 1;
		sayac++;
	}
	
}

printf(" sayac = %d\n",sayac);
if(sayac>en_uzun_zincirli_sayi_sayaci){en_uzun_zincirli_sayi = sayi,en_uzun_zincirli_sayi_sayaci = sayac;}
}	
printf("en uzun zincirli sayi = %llu,sayaci=%llu",en_uzun_zincirli_sayi,en_uzun_zincirli_sayi_sayaci);
}
