#include <stdio.h>

main()


{ 

float vize, final, ort;

printf("vize girin");
scanf("%f",&vize);
printf("final girin");
scanf("%f",&final); 

ort=vize*0.4+final*0.6;

if(final<45)

printf("final barajini gecemediniz");
else
{

if(ort>=60)
printf("%f ile gectiniz",ort);
else printf("%f ile kaldiniz",ort);


}
}
