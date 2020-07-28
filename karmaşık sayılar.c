#include<stdio.h>
#include<stdlib.h>

struct komplex{
	int real; int img;
	int a,b,c;
};
struct komplex topla(struct komplex a,struct komplex b){
	struct komplex k;
k.real=a.real + b.real;
k.img=a.img + b.img;
	return k;
}
int main(){
	struct komplex a,b,c;
	printf("1.komplex sayinin real degerini giriniz:");
	scanf("%d",&a.real);
	printf("1.komplex sayinin img degerini giriniz:");
	scanf("%d",&a.img);
	
	
	printf("2.komlex sayinin real degerini giriniz:");
	scanf("%d",&b.real);
	printf("2.komplex sayinin img degerini giriniz:");
	scanf("%d",&b.img);
	
	printf("1.komplex sayi %d+%di\n",a.real,a.img);
	printf("2.komplex sayi %d+%di\n",b.real,b.img);
	c=topla(a,b);
	printf("sonuc %d+%di\n",c.real,c.img);
	
}