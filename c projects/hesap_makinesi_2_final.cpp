#include <stdio.h>


main()
{

float sayi1,sayi2,sonuc;
char islem;

printf("1. sayiyi giriniz:");
scanf("%f", &sayi1);

printf("2. sayiyi giriniz:");
scanf("%f", &sayi2);




switch(islem)

	{
	
	
	case '+':
		sonuc=sayi1+sayi2;
		printf("sonuc%f",sonuc);
		
		
		break;
		
		
		
		case '-':
		sonuc=sayi1-sayi2;
		printf("sonuc%f",sonuc);
		
		break;
		
		case '*':
		
		sonuc=sayi1*sayi2;
		printf("sonuc%f",sonuc);
		
		break;
		
		case '/':
sonuc=sayi1/sayi2;
printf("sonuc%f",sonuc);
		
		break;
		
		
		default :printf("tanimsiz");

	
}
printf("yapilacak islemi seciniz:");
scanf("%c",&islem);	
}



	

