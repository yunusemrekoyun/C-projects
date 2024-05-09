#include <stdio.h>

main()


{
	
	int sayi1, sayi2;
	printf("1.sayiyi girin:");
	scanf("%d",&sayi1);
	
	printf("2.sayiyi girin:");
	scanf("%d", &sayi2);
	
	if(sayi1>sayi2)
	printf("1.sayi buyuktur");
	else if	(sayi2>sayi1)
	printf("2.sayi buyuktur");
	else 
	printf("esittir");
}
