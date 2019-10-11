/*
sena merdin
* kaynama noktası hesaplama
 * 
 */


#include <stdio.h>

	int main()
{
	float kaynama_nok;
	printf("Kaynama noktasi giriniz:");  scanf("%f", &kaynama_nok);
	
	if(kaynama_nok>95 && kaynama_nok<105){
		printf("Maddeniz: su");
	}
	else if(kaynama_nok>339 && kaynama_nok<374){
		printf("Maddeniz: civa");
	}
	else if(kaynama_nok>1127 && kaynama_nok<1246)
		printf("Maddeniz: bakir");
	else if(kaynama_nok>2054 && kaynama_nok<2271)
		printf("Maddeniz: gumus");
	else if(kaynama_nok>2527 && kaynama_nok<2793)
		printf("Maddeniz: altin");
	else
	printf("Boyle bir kaynama noktasina sahip madde bulunmamaktadir !!!");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

