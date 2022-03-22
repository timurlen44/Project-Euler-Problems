#include<stdio.h>
#include<stdlib.h>
#define SAYI 10
int tek=0,cift=0,boyut=0;
int ilk_sayi,ikinci_sayi,sayi=0,son_sayi=0;

int palindromik_sayimi = 0;
char sayi_array[50];
int sayinin_basamagini_bul(int sayi){
	for(boyut=0;sayi !=0;boyut++){
	sayi /=10;	
	}
	//return boyut;
}
int palindromik_sayimi_degilmi_kontrol(int sayi){
	itoa(sayi,sayi_array,10);
for(int i = 0;i<boyut/2;i++){
	
	if(sayi_array[boyut-1-i] == sayi_array[i]){
		printf("palindromik sayi");
		palindromik_sayimi = 1;
	}
	else{
		i= boyut;
		palindromik_sayimi = 0;
	}
}
}


int main(){	
sayinin_basamagini_bul(sayi);
palindromik_sayimi_degilmi_kontrol(sayi);
for(ilk_sayi=999;ilk_sayi>=100;ilk_sayi--){
	for(ikinci_sayi=999;ikinci_sayi>=100;ikinci_sayi--){
		sayi=ilk_sayi*ikinci_sayi;
		sayinin_basamagini_bul(sayi);
		palindromik_sayimi_degilmi_kontrol(sayi);
		
		if(palindromik_sayimi == 1 && sayi> son_sayi){
			son_sayi = sayi;
		}
	}
}
printf("son_sayi=%d",son_sayi);


}
