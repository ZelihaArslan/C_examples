#include<stdio.h>
#include<conio.h>
int uzunluk(char*,int);
int main()
{
	char a[100];
	int q;
	printf("cumle giriniz:");
	gets(a);
	printf("Kelime buldurcan? karakter mu? karakter ise1 kelime ise 2:\n");
	scanf("%d",&q);
	printf("\nuzunlugu:%d",uzunluk(a,q));
	getch();
}
int uzunluk(char *p,int q)
{
	int i=0;
	int sayac=0;
	if(q==1)
	{
		while(*p!='\0')
		{
			i++;
			p++;
		}
		return i;
	}
	else if(q==2)
	{
		while(*p!='\0')
		{
			if(*p==' ')
				sayac++;
			p++;	
		}
		sayac++;
		return sayac;
	}
	
	
}
