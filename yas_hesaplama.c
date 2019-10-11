/*
 sena merdin
 * yaş hesaplama
 * 
 * 
 */


#include <stdio.h>

int main()
{
	int yas;
	  printf("bir yas giriniz:");  scanf("%d", &yas);
	
	if(yas<18)
	  printf("gencsiniz !!!");
	else if(yas>=18 && yas<=30)  
	  printf("orta yaslisiniz");
	 else
	 printf("yaslisiniz");
	
	
	return 0;
}

