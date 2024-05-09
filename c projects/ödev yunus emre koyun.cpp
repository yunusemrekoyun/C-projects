#include <stdio.h>  

#include <string.h>


main()
{

	  char ifade[999];


      	int sayac;
	
printf("en az 1 kelimeden olusan bir ifade girin:");
	gets(ifade);


	
     	printf("%c",ifade[0]);
for ( sayac=0;sayac<=strlen(ifade);sayac++)


	{
		
if(ifade[sayac]==' ')
	printf("%c",ifade[sayac+1]);

	}
	}
