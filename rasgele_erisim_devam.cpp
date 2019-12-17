#include<stdio.h> //yazma iþlemi

struct musteri{
	int no;
	char ad[40];
	double bakiye;
};
typedef struct musteri musteri;

int main_rasdos2()
{
	int kayitNo;
	musteri musteriBilgi;
	FILE *ptr=fopen("musteri.txt","r+"); //içerisindekileri okuyup silmeden veri yazmam gerekli
	if(ptr==NULL)

	printf("dosya acilamadi...");
	else{
		printf("hangi kayda veri girilecek");
		scanf("%d",&kayitNo);
		while(kayitNo!=0)
		{
			printf("Musteri no,Ad,Bakiye gir:");
			scanf("%d %s %lf", &musteriBilgi.no,musteriBilgi.ad,&musteriBilgi.bakiye);
			fseek(ptr,(kayitNo-1)*sizeof(musteri),SEEK_SET); //
			fwrite(&musteriBilgi,sizeof(musteri),1,ptr); 
				printf("hangi kayda veri girilecek");
	         	scanf("%d",&kayitNo);
		}
		fclose(ptr);
	}

}
