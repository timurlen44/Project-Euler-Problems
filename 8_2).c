/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>

signed long long int sayi=0;
signed long long int gecici_sayi=0;
char sayi_char_array[]="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
char sayi_char_array_gecici[13];
    
    
    /*
	sayi2 =5304207529634
sayi asil=us =5436925702403
sayi2 =3042075296345
sayi asil=us =0543692570240
sayi2 =420752963450
	
	2571636269561882670428252483600823257     5   3      0420752963450
	
	
	*/
signed long long int my_pow(int sayi,int us){
	signed long long int sonuc=1;
	if(us == 0){
		return 1;
	}
	else{
	for(int i=1;i<=us;i++){
		sonuc *=sayi;
	}	
	return sonuc;	
	}
}
    
signed long long int convert_fonksiyonum(){
	signed long long int us=0;
	signed long long int gecici_sayi2=0;
	char sayi_char_array_gecici2[1];

	gecici_sayi=0;
	for(int i =0;i<13;i++){
	us = my_pow(10,i);
	//printf("%d\n,",us);
	sayi_char_array_gecici2[0]=sayi_char_array_gecici[12-i];
	gecici_sayi2=atoi(sayi_char_array_gecici2);
	
	gecici_sayi +=gecici_sayi2*us;
	}
	//printf("sayi2 =%llu\n",gecici_sayi);
} 


int main()
{
	

    for(int a=0;a<988;a++){   
    for(int i=0;i<13;i++){
        sayi_char_array_gecici[i]=sayi_char_array[i+a];
	}
    convert_fonksiyonum();
	if(gecici_sayi>sayi){
	sayi = gecici_sayi;}
	}
	

	printf("\n\n\n\n\n\n%llu",sayi);
	printf("my_pow = %llu",my_pow(9,13));
	//printf("%d",a);

   	//printf("sayi = %d",sayi);
    return 0;
   
    /*
	bulduðum þey 1000 basamaklý sayýdan içerisindeki tüm yan yana olan sayýlarý tarayarak 13 basamaklý en büyük sayi hangisi onu bulmuþum 
	*/





}

