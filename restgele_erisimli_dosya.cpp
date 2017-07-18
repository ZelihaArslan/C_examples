#include<stdio.h>
struct musteri{
	int hesap;
	char ad[20];
	char soyad[30];
	double bakiye;
};
int main()
{
	int i;
	struct musteri bosmusteri={0,"","",0.0};
	FILE *myPtr;
	if((myPtr=fopen("musteri.dat","w"))==NULL)
	   printf("dosya acilmadi\n");
	else
	{
		for(i=1;i<=100;i++)
		{
			fwrite(&bosmusteri,sizeof(struct musteri),1,myPtr);
		}
		fclose(myPtr);
	}
	return 0;
}
