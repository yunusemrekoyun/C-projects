#include <stdio.h>

main()


{

    float boy, kilo ,VKE ;
    
    printf("boyu girin:");
    scanf("%f",&boy);
    
    printf("kilo girin:");
    scanf("%f",&kilo);
    
    VKE=kilo/(boy*boy);
    
    
    printf("VKE=%.1f",VKE);
    
    if(VKE<18.5)
    printf("zayifsiniz");
    else if(VKE>=18.5 && VKE<=24.9)
    printf ("ideal kilo");
    else if(VKE>=25 && VKE<=29.9)
printf("kilolu");
else printf("asiri kilolu");    
    
}
