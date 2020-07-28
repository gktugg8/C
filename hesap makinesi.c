#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float sonuc,sayi1,sayi2;
	int secim;
	printf("toplama icin :1\n");
	printf("cikarma icin :2\n");
	printf("carpma icin :3\n");
	printf("bolme icin :4\n");
	scanf("%d",&secim);

	float  bolme;
	
	switch(secim){
		case 1:{
				printf("iki tane sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);
			sonuc=sayi1+sayi2;
			printf("sonuc:%f",sonuc);
			break;
		}
			case 2:{
					printf("iki tane sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);
			sonuc=sayi1-sayi2;
			printf("sonuc:%f",sonuc);
			break;
		}
			case 3:{
					printf("iki tane sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);
			sonuc=sayi1*sayi2;
			printf("sonuc:%d",sonuc);
			break;
		}
			case 4:{
					printf("iki tane sayi giriniz");
	scanf("%d%d",&sayi1,&sayi2);
			bolme=sayi1/sayi2;
			printf("bolme:%f",bolme);
			break;
		}
		default:printf("Hatali bir sayi girdiniz");
		break;
	}
	
	
	getch();
	
}