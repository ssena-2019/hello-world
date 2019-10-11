/*
 vücut kitle indeksi hesaplama
 * ödev2.3 
 */


#include <stdio.h>

     int main()
{
	int kilo;
	float boy,VKI;
	
			printf("Lutfen boyunuzu metre cinsinden degerini giriniz:");  scanf("%f", &boy);
			printf("Lutfen kilonuzu kilogram cinsinden degerini giriniz:"); scanf("%d", &kilo);
	VKI= kilo/(boy*boy);
	if(VKI<18.5)	
			printf("Vucut kitle indeksiniz:%.2f ve grubunuz ZAYIF", VKI);
	else if(VKI>18.5 && VKI<24.9)
	        printf("Vucut kitle indeksiniz:%.2f ve grubunuz NORMAL", VKI);	
	else if(VKI>25 && VKI<29.9)
			printf("Vucut kitle indeksiniz:%.2f ve grubunuz FAZLA KİLOLU", VKI);	
	else if(VKI>30 && VKI<39.9)	
			printf("Vucut kitle indeksiniz:%.2f ve grubunuz OBEZ", VKI);	
	else if(VKI>40)
	        printf("Vucut kitle indeksiniz:%.2f ve grubunuz ILERI DERECEDE OBEZ", VKI);
	
	return 0;
}

