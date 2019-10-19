/*
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	
	printf("Lutfen ucgenin a kenarini giriniz:");   scanf("%d", &a);
	printf("Lutfen ucgenin b kenarini giriniz:");   scanf("%d", &b);
	printf("Lutfen ucgenin c kenarini giriniz:");   scanf("%d", &c);
	
	 if(a+b>c && b+c>a && a+c>b && a-b<c && b-c<a && a-c<b){
	     printf("Girdiginiz degerlerle ucgen olusmaktadir.\n"); 
	 
	        if(a==b&&a!=c )
	          printf("ucgeniniz ikizkenar ucgendir.");
	        if(a==b&&b==c)
	          printf("ucgeniniz eskenar ucgendir.");
	        if(a!=b&&b!=c&&a!=c)
	          printf("ucgeniniz cesitkenar ucgendir.");
	     
	     }else{
	 
	 printf("Girdiginiz degerlerle ucgen olusmaz!!!");
	}
	
	
	
	return 0;
}

