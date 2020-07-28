#include <stdio.h>
#include <conio.h>
 
int main(){
    
    int i, j, yildizSayisi=1, boslukSayisi=5;
 
    for(i=0; i<5; i++){
        
        for(j=0; j<boslukSayisi; j++)
            printf(" ");
            printf("a");
    
        for(j=0; j<yildizSayisi; j++)
            printf("*");    
         
        printf("\n");
                
        yildizSayisi+=2;   
        
        boslukSayisi--;
        
    }
    
    
    getch();
    return 0;
}