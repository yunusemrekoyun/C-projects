/* Üçgenin alanýný hesaplayan program */



#include <stdio.h>

int main()
{
	float kenar, yukseklik, alan;
	
	printf("kenar uzunlugunu girin:");
	scanf("%f",&kenar);
	
	printf("yuksekligi girin:");
	scanf("%f",&yukseklik);
	
	
	alan=(kenar*yukseklik)/2;
	printf("\n\n\nucgenin alani\t=\t%.2f",alan);
	
	
	
	
}
