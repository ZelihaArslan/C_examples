#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,*ptr,sum=0;
printf("eleman sayisi gir\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
	printf("yeterli hafýza yok");
}
printf("dizi elemanlarini girin");
for(i=0;i<n;i++)
{
	scanf("%d",ptr+i);
	sum+=*(ptr+i);
}
printf("toplam=%d",sum);
getchar();
return 0;
}


