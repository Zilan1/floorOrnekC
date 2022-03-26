#include <stdio.h>
#include <stdlib.h>

int main() {
 
    double sayi,sonuc1,sonuc2;
	
	printf("Degeri Girin: ");
	scanf("%lf",&sayi);
	
	sonuc1=floor(sayi);
	
	printf("Sonuc: %.f",sonuc1);
	
	printf("\n");
	
	sonuc2=ceil(sayi);
	
	printf("Sonuc: %.f",sonuc2);
	
	
	
	
	// pow kullanimi
	
	//int x,y;
    //int sonuc;
    
    //printf("Taban: ");
    //scanf("%d",&x);
    
    //printf("Us: ");
    //scanf("%d",&y);
    
    //sonuc=pow(x,y);
    
    //printf("Sonuc: %d",sonuc);
	
	
	// sqrt kullanimi
	
	//int sayi;
    //double sonuc; 
    
    //printf("Sayiyi Giriniz: ");
    //scanf("%d",&sayi);
	//sonuc=sqrt(sayi);

    //printf("Sonuc: %.4f",sonuc);

	return 0;
}
