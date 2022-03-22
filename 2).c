#include<stdio.h>
int main(){
	int first =1;
	int second= 2;
	int temp=0;
	long long sum=0; 
	while(1){
		sum +=first+second;
		if(second<4000000){
		temp =second,second = second+first,first=temp;}
		else{
			printf("sum = %d",sum);
			while(1){
				;
			}
		}
		
	}
}
