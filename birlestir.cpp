// dizideki elemanlari birleştirir
#include<stdio.h>
#include<stdlib.h>
int *birlestir(int[],int,int[],int);
int main()
{
	int i;
	int liste_1[5]={6,7,8,9,10};
	int liste_2[7]={11,12,13,14,15,16,17};
	int *ptr;
	ptr=birlestir(liste_1,5,liste_2,7);
	for(i=0;i<12;i++)
	printf("%d",ptr[i]);
	printf("\n");
	
	return 0;
	
}

int *birlestir(int a[],int boyut_1,int b[],int boyut_2)
{
	
	int *sonuc=(int*)calloc(boyut_1+boyut_2,sizeof(int));
	int i,k;
	for(i=0;i<boyut_1;i++)
	sonuc[i]=a[i];
		for(k=0;k<boyut_2;i++,k++ ){
	sonuc[i]= b[k];
}
return sonuc;
}
