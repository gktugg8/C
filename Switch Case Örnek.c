#include<stdio.h>
#include<conio.h>
	main(){
	int sayi;
	printf("Bir sayi giriniz"); 
	scanf("%d",&sayi);
	switch(sayi){
	
	case 1:printf("Pazartesi");
	break;
	case 2:printf("Sali");
	break;
	case 3:printf("Carsamba");
	break;
	case 4:printf("Persembe");
	break;
	case 5:printf("Cuma");
	break;
	default:printf("Hatali bir sayi girdiniz");
	break;
	}
	
getch();	
}