#include<stdio.h>
int main()
{
	int hesapNo;
	double bakiye;
	char ad[30];
	FILE *myPtr;
	if((myPtr=fopen("musteri.dat","r"))==NULL)	
	    printf("dosya acilmadi\n");
	else{
		
	printf("%d %lf %s",hesapNo,bakiye,ad);
		fscanf(myPtr,"%d %lf %s", &hesapNo,&bakiye,ad);
	while(!feof(myPtr))
	{
		printf("%d %lf %s",hesapNo,bakiye,ad);
		fscanf(myPtr,"%d %.1f %s", &hesapNo, &bakiye, ad);
	}
	fclose(myPtr);
	}
	return 0;
}
