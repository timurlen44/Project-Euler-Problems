#include<stdio.h>
int main(){
	int sayi = 1;
	while(1){
		
		for(int i=1;i<=20;i++){
		if(sayi%i != 0){
			
			break;
		}
		else if(i == 20){
			printf("sayimiz = %d",sayi);
		}
			
		}
		sayi++;
	}
	
}
