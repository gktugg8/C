#include<stdio.h>
#include<conio.h>
main(){
	int a,b,toplam,karetoplam,kupcarpim;
	printf("ilk sayiyi girin");
	scanf("%d",&a);
	printf("ikinci sayiyi girin");
	scanf("%d",&b);
	toplam=a+b;
	if(toplam%2==0){
	
	karetoplam=a*a+b*b;
	printf("karetoplam:%d",karetoplam);
	scanf("%d",&karetoplam);
	}
	else	{
		kupcarpim=a*a*a*b*b*b;
		printf("kupcarpim:%d",kupcarpim);
		scanf("%d",&kupcarpim);
			getch();
	}

	
	
}
