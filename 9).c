#include<stdio.h>
signed long long int a = 0,b=0,c=0,kalan=0,pisagor_teoremi=0,toplamlari=1000;
int main()
{
	
	for(c=998;c>1;c--){
		kalan=1000-c;
		
		for(b=1;b<kalan;b++){
			a=kalan-b;
		
		if(((c*c) == (a*a + b*b)) && ((a+b+c) == 1000) && (a<c) && (b<c) && (a<b)){
			
			printf("a = %d,b=%d,c=%d,sonuc = %llu",a,b,c,a*b*c);
		}	
		}
	}
}
