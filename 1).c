#include<stdio.h>
/*
1000 e kadar 3 ve 5 in katlarýnýn toplamý
*/
int main(){
	int sum = 0;
	for(int i=0;i<1000;i++){
		if(i%3==0){
			sum += i;
		}
		else if(i%5==0){
			sum += i;
		}
		else{
			;
		}
		
	}
	printf("sum = %d",sum);
}
