#include<stdio.h>
#include<conio.h>
main(){
	int a,b,matris[5][5],top1,top2;
	int sayi_secimi1,sayi_secimi2;
	for(a=0;a<5;a++){
	for(b=0;b<5;b++){
	printf("[%d][%d] dizi elemani :",a+1,b+1); scanf("%d",&matris[a][b]);
		}
	}
	for(a=0;a<5;a++){
	for(b=0;b<5;b++){
	printf("%d ",matris[a][b]);
		}
	printf("\n");
	}
	
	printf("satir islemi icin [1] e \n sutun islemi icin [2] ye basiniz\n"); scanf("%d",&sayi_secimi1);
	
	if(sayi_secimi1==1){
	printf("kacinci satirin toplanmasini istiyorsunuz: \n"); scanf("%d",&sayi_secimi2);
	switch(sayi_secimi2){
	case 1:
	top1=matris[0][0]+matris[0][1]+matris[0][2]+matris[0][3]+matris[0][4]; 
	printf("1. satirin toplami : %d dir",top1); break;
	case 2:
	top1=matris[1][0]+matris[1][1]+matris[1][2]+matris[1][3]+matris[1][4];
	printf("2. satirin toplami : %d dir",top1); break;
	case 3:
    top1=matris[2][0]+matris[2][1]+matris[2][2]+matris[2][3]+matris[2][4];
    printf("3. satirin toplami : %d dir",top1); break;
    case 4:
    top1=matris[3][0]+matris[3][1]+matris[3][2]+matris[3][3]+matris[3][4];
    printf("4. satirin toplami : %d dir",top1); break;
    case 5:
    top1=matris[4][0]+matris[4][1]+matris[4][2]+matris[4][3]+matris[4][4];
    printf("5. satirin toplami : %d dir",top1); break;
    
    
		}
		
	}
	else if(sayi_secimi1==2){
		printf("kacinci sutunun toplanmasini istiyorsunuz"); scanf("%d",&sayi_secimi2);
		switch(sayi_secimi2){
			case 1:
			top2=matris[0][0]+matris[1][0]+matris[2][0]+matris[3][0]+matris[4][0]; 
			printf("1. sutunun toplami : %d dir",top2); break;
			case 2:
			top2=matris[0][1]+matris[1][1]+matris[2][1]+matris[3][1]+matris[4][1]; 
			printf("2. sutunun toplami : %d dir",top2); break;
			case 3:
			top2=matris[0][2]+matris[1][2]+matris[2][2]+matris[3][2]+matris[4][2]; 
			printf("3. sutunun toplami : %d dir",top2); break;
			case 4:
			top2=matris[0][3]+matris[1][3]+matris[2][3]+matris[3][3]+matris[4][3]; 
			printf("4. sutunun toplami : %d dir",top2); break;
			case 5:
			top2=matris[0][4]+matris[1][4]+matris[2][4]+matris[3][4]+matris[4][4]; 
			printf("5. sutunun toplami : %d dir",top2); break;
		}
		getch();
		getchar();
	}
}