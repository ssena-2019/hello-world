/*
 * if if else.c
 koordinat bölgesi hesaplama
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int x,y;
	printf("Lutfen x degeri giriniz:");  scanf("%d", &x);
	printf("Lutfen y degeri giriniz:");  scanf("%d", &y);
	
	if(x>0){
		//x ve y pozitif ise
		if(y>0)
		printf("(%d,%d)noktasi 1.ceyrektedir.", x,y);
		else if(y<0) // x pozitif ve y pozitif değilse
		printf("(%d,%d)nokta 4.ceyrektedir.", x,y);
		//else if(y==0)
		//printf("y=0 oldugundan bolgesi yoktur.");
	}
	
	if(x<0){	
		if(y>0)
		printf("(%d,%d) noktasi 2.ceyrektedir.", x,y);
		else if(y<0)// x negatif ve y pozitif değil
		printf("(%d,%d) nokta 3.ceyrektedir.", x,y);
	}
	
	if(x==0 || y==0)
	printf("x yada y 0 oldugundan bolgesi yoktur!!!");
	return 0;
}









