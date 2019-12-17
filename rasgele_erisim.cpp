#include<stdio.h>

struct musteri{
	int no;
	char ad[40];
	double bakiye;
};
typedef struct musteri musteri;

int main()
{
	int i;
	musteri bosKayit={0,"",0.0};
	FILE *ptr=fopen("musteri.txt","w");
	if(ptr==NULL)

	printf("dosya yazma hatasi...");
	else{
		for(i=0;i<100;i++)
		{
			fwrite(&bosKayit,sizeof(musteri),1,ptr); //bos kaydýn bulundugu degisken den baslayarak 1 seferligine byte transferi yap 
		}
		fclose(ptr);
	}

}
