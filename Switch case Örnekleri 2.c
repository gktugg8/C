#include<stdio.h>
#include<conio.h>
main(){
	int sayi
	basa :printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	switch(sayi){
		case 1 ... 5:printf("hafta ici");
		break;
		case 6 ... 7:printf("hafta sonu");
		break;
		default: printf("Hatali bir sayi girdiniz ");
		goto basa;
		break;
	}
	
	getch();
}