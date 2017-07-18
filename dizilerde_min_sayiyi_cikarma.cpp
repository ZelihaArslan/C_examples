// minimum sayiyi diger sayilarda cıkarıp ekrana yazma
#include<stdio.h>
int main()
{
	int dizi[5], i,min=9999;
	
	for(i=0;i<5;i++)
	{
		printf("elemanlari giriniz:");
	scanf("%d",&dizi[i]);
}
	for(i=0;i<5;i++)
	{
	   	if(dizi[i]<min)
		min=dizi[i];
}


	for(i=0;i<5;i++)
	{
	     dizi[i]=dizi[i]-min;
			printf("yeni hali: %d\n",dizi[i]);
	}

return 0;
}
