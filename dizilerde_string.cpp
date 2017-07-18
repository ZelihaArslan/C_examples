#include<stdio.h>
int main()
{
	char dizi[100];
	int i;
	printf("bir cumle giriniz:");
	gets(dizi);
	for(i=0;i<20;i++)
	{ 
	  if(dizi[i]!=' ')
	  	printf("%c",dizi[i]);
	  else
	  printf("\n");
		
 	}
 	return 0;
}
