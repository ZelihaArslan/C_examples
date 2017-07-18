//en buyuk elemaný bulma
#include<stdio.h>
int main()
{
	int dizi[10], i,max=0;
	
	for(i=0;i<10;i++)
	{
			printf("elemanlari giriniz:");
	scanf("%d",&dizi[i]);
}
	for(i=0;i<10;i++)
	{
		if(dizi[i]>max)
		max=dizi[i];
}
printf(" %d",max);

return 0;
}
