#include<stdio.h>
main(){
	int sayi1,sayi2,toplam,fark;
	printf("Birinci sayiyi giriniz");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz");
	scanf("%d",&sayi2);
	
	if(sayi1<sayi2){
		toplam=sayi1+sayi2;
	
		printf("sayilarin toplamý:%d",toplam);
		
	}

if(sayi1>sayi2){
	fark=sayi1-sayi2;
	printf("sayilarin farki:%d",fark);
}
else{
	printf("sayilar birbirine eþittir");
}	
	
getch();



}


