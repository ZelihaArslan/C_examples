//toplam sembol
#include<stdio.h>
int main()
{
	int i;
	int toplam;
	int tpl;
	int n;
	printf("bir sayi giriniz:");
	scanf("%d",&i);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		toplam=toplam+i+n;
		tpl=i+n;
			printf("%d + %d: %d\n",i,n,tpl);
	}
		printf("toplam:%d\n",toplam);
}
