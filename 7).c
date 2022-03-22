#include<stdio.h>
int main(){

int kacinci_asal = 1;
unsigned long long  sayi =3;

int kontrol=0;    

while(kacinci_asal != 10001 ){

   
for(unsigned long long  i=2;i<sayi;i++)    
{    
if(sayi%i==0)    
{    
kontrol=1;    
break;    
}    
}    
if(kontrol==0){
kacinci_asal++;
printf("kacinci_asal=%d",kacinci_asal);
}
sayi++,kontrol=0;
}
sayi -=1;
	printf("sayi = %d,kacinci_asal = ",sayi,kacinci_asal);
}
