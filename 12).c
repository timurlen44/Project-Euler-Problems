#include<stdio.h>
unsigned long long int sayi =0;
unsigned long long int n =1;// n= 768 de kald�k
int kac_bolenli=0;//1075311 de kald�m
int main(){
	
	while(1){
	sayi = (n*(n+1))/2,	n++,kac_bolenli=0;//��gensel sayilarin kurali bu ka�inci sayiyi istiyorsan n yerine o sayiyi yaz ve n*(n+1)/2 yaparak o sayiyi bul

	for(unsigned long long int i=1;i<=sayi/2;i++){//279378
		if(sayi%i==0){
			kac_bolenli++;
		}
		printf("sayi = %llu kac_bolenli=%d\n",sayi,kac_bolenli);
	}
	kac_bolenli++;
	if(kac_bolenli>5){printf("Sonuc = %llu ",sayi);break;}	
	}
}
