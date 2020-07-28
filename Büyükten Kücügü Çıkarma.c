#include<stdio.h>
#include<conio.h>
main(){
	
	int sayi1,sayi2;
	printf("birinci sayiyi giriniz");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz");
	scanf("%d",&sayi2);
	if(sayi1<sayi2){
	printf("sonuc:%d",sayi2 - sayi1);
	}
  else	if(sayi1>sayi2){
		printf("sonuc:%d",sayi1 - sayi2);
	}
	else if(sayi1==sayi2){
		printf("sayilar esittir");
	}
	
getch();

}