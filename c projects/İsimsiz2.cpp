#include <stdio.h>

main()

{
	float sayi, toplam=0;
	int sayac=1;
	printf("%d. sayi girin:", sayac);
		scanf("%f",&sayi);
	
	while(sayi!=0)
	{
	       toplam=toplam+sayi;
	       printf("%d. sayi girin:", sayac);
		scanf("%f",&sayi);
		sayac++;
	}
}
	

