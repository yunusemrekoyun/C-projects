#include <stdio.h>

main()
{ 

int yas;
float boy;
char cinsiyet;
 
 printf("sirasiyla yas boy ve cinsiyet (k veya e) girin:");
 scanf("%d %f %c", &yas,&boy,&cinsiyet);  //ampersand

printf("kisinin yasi %d, boyu %.2f, cinsiyeti %c dir",yas ,boy, cinsiyet  );
}
