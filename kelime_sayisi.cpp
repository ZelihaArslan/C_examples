#include<stdio.h>
#include<string.h>
int main()
{
	char dizi[100];
	int i,a=0;
	printf("bir cumle giriniz:");
	gets(dizi);
	for(i=0;i<strlen(dizi);i++)
	{ 
	  if(dizi[i]!=NULL)
	  a++;
		
 	}
 	printf("toplam kelime:%d",a);
 	return 0;
}
