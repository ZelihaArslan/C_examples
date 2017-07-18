#include<stdio.h>
int linearSearch(int[],int,int);
int main(void)
{
	int dizi[]={1, 3, 5, 7, 8, 10, 11};
	int sonuc,aranan,i;
	for(i=0;i<7;i++)
	printf("%d \n",dizi[i]);
printf("aranani giriniz:");
scanf("%d",&aranan);

 sonuc =linearSearch(dizi,aranan,7);
if(sonuc==-1)
printf("aranan dizide yok");
else
printf("%d. sirada bulundu", sonuc);

}

 int linearSearch(int dizi[],int aranan, int n)
{
	for(int i=0;i<n;i++)
	{
		if(dizi[i]==aranan)
		return i;
	}
	return -1;
}
	
	
