#include<stdio.h>

int main(){
int kontrol = 0;
unsigned long long int toplam = 0;
for(unsigned long long int sayi=2;sayi<2000000;sayi++)	{

for(unsigned long long  int i=2;i<sayi;i++)    
{    
if(sayi%i==0)    
{    
kontrol=1;    
break;    
}    
}    
if(kontrol==0){
//
printf("sayi=%llu\n",sayi);
toplam += sayi;
printf("sonuc = %llu\n",toplam);
}
kontrol=0;
}


}
