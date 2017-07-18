#include<stdio.h>
void bubbleSort(int[],int);
int main(void)
{
	int i=0,a[5];
	printf("siralamak istedigin 5 sayiyi gir:");
	while(i<5){
		scanf("%d",&a[i]);
		i++;
}
	
	bubbleSort(a,5);
	i=0;
	while(i<5){
		printf("%d",a[i]);
		i++;
	}
	return 0;
}
void bubbleSort(int dizi[],int n)
{
	int gecici;
	for(int i=1; i<n;i++)
	{
		for(int k=0;k<n-1-i; k++)
		 {
		 	if(dizi[k]>dizi[k+1])
		 	{
		 		gecici=dizi[k];
		 		dizi[k]=dizi[k+1];
		 		dizi[k+1]=gecici;
			 }
		 }
	}
}
