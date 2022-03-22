#include<stdio.h>
//#define SAYI 13195
#define SAYI 600851475143 
long long prime_factor=0;
long long prime_factor_temp=0;

int prime_factor_control(){
	for(long long a =2;a<prime_factor_temp;a++){
		
		if(prime_factor_temp%a == 0){
			return 0;
		}
	}
return 1;
}
int main(){
//13195'in ana faktörleri 5, 7, 13 ve 29'dur.

//600851475143 sayýsýnýn en büyük ana faktörü nedir?	
for(long long i=2;i<SAYI;i++){
	if(SAYI%i==0){
		prime_factor_temp=i;
		
		if(prime_factor_control() == 1){
		printf("%d\n",prime_factor_temp);
				prime_factor = prime_factor_temp;

		}
		}
		
	}
	printf("prime_Factor is = %d",prime_factor);
}
//printf("%d",13195/29);

