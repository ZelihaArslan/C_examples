#include<stdio.h>
int main()
{
	int hesapNo;
	char ad[30];
	double bakiye;
	FILE *nesli;
	if((nesli=fopen("musteri.dat","w"))=NULL)
	printf("dosya acilmadi\n");
	else{
	printf("hesap no,ad ve bakiye gir\n");
	printf("dosyanin sonuna gelmek icin eof yap\n");// ctrl+Z
    scanf("%d %s %lf",&hesapNo, ad, &bakiye);
    
    while(!feof(stdin))
    {
    	fprintf(nesli,"%d %s %.2f\n",hesapNo,ad,bakiye);
    	scanf("%d %s %lf", &hesapNo, ad ,&bakiye);
	}
   fclose(nesli);
   }
   return 0;
}
