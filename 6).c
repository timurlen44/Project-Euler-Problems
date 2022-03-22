#include<stdio.h>
int main(){
	int karelerinin_toplami=0,toplamlarinin_karesi=0;
	for(int i=1;i<=100;i++){
		karelerinin_toplami +=i*i;
	}
	for(int i=1;i<=100;i++){
		toplamlarinin_karesi +=i;
	}
	toplamlarinin_karesi=toplamlarinin_karesi*toplamlarinin_karesi;
	int sonuc = toplamlarinin_karesi-karelerinin_toplami;
	printf("sonuc=%d",sonuc);
	
	
}
