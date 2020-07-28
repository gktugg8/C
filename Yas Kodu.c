#include<stdio.h>
main(){
	int yas;
	printf("Yasinizi giriniz:");
	scanf("%d",&yas);
	if(yas<=10){
		printf("Daha Cok kucuksun");
		
	}
	else if(yas>=18 && yas<=40){
		printf("Genc Bir yas");
		
	}
	else{
		printf("Yaslisiniz");
		
	}
	getch();
}