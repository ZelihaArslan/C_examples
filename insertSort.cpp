#include<stdio.h>
void insertSort(int[],int);
int main(void)
{
	int i=0,a[5];
	printf("siralamak istedigin 5 sayiyi gir:");
	while(i<5){
		scanf("%d",&a[i]);
		i++;
}
	
	insertSort(a,5);
	i=0;
	while(i<5){
		printf("%d",a[i]);
		i++;
	}
	return 0;
}
	void insertSort(int dizi[], int n)
	{
		int ekle,k;
		for(int i=1;i<n;i++)
		{
			ekle=dizi[i];
			for(k=i-1; k>=0 && ekle<= dizi[k];k--)
		    	dizi[k+1]=dizi[k]; //geriye kaydýrma uygun yer boþaltýlýp eklendi
	       dizi[k+1]=ekle;
		}
	}
