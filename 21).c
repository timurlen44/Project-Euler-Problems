#include<stdio.h>
long dizi[10000];
long sum =1;
unsigned long long int dostane_sayilar_toplami= 0;
int main()
{
	for(int i = 2;i<=9999;i++){
	for(int i2=2;i2<=(i/2);i2++){
		if(i % i2  == 0){sum +=i2;}               		
		}
	//printf("sayi = %d,bolenleri toplami = %d\n",i,sum);
	dizi[i]=sum;sum=1;                     	
	}


for(long i=2;i<=9999;i++){
	if(dizi[i]==1){
		continue;
	}
	if(i != dizi[i] && i == dizi[dizi[i]]){
		printf("i = %d, = %d\n",i,dizi[i]);
		dostane_sayilar_toplami += (i+dizi[i]);
		dizi[i]=1;
	}
}
printf("Sonuc = %llu",dostane_sayilar_toplami);
/*cevap 31626




7*/
}
