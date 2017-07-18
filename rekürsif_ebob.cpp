/*Main fonksiyonu içerisinde verilen iki pozitif sayýyý kullanarak bu sayýlarýn en büyük ortak bölenini
rekürsif bir fonksiyon kullanarak bulunuz.*/
#include<stdio.h>
int ebob(int a,int b)
{
	int tmp;
	if(b>a){
		tmp=a;
		b=a;
		b=tmp;
	}
		if(b!=0 )
	return (b,a%b);
	else
	return a;
}
int main()
{
	int x,y;
	printf("iki sayi giriniz:");
	scanf("%d  %d",&x, &y);
	printf("bu sayilarin ebobu:%d",ebob(x,y));
	return 0;
}
