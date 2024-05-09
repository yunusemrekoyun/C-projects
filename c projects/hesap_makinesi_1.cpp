#include <stdio.h>
#define PI 3.14

main()
{
	float sayi1, sayi2;
	char islem;
	
	printf("(saysayi1+ islem+sayi 2) \n sirasiyla birer bosluk birakmadan girin");
scanf("%f%c%f", &sayi1, &islem, &sayi2 );
if(islem=='+')
printf("\n %.1f %c %.1f = %.1f", sayi1,islem,sayi2,sayi1+sayi2);

else if(islem=='-')	
printf("\n %.1f %c %.1f= %.1f", sayi1,islem,sayi2,sayi1-sayi2 );

else if (islem=='*')
printf("\n %.1f %c %.1f = %.1f", sayi1,islem,sayi2,sayi1*sayi2);

else if (islem=='/')
printf("\n %.1f %c %.1f=%.1f", sayi1,islem,sayi2,sayi1/sayi2);

}
	
	
	
	

