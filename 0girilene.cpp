#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct node{
	int *sayi;
	int sayac=0;
}sayilar; // typedeften pointer ürettiðim zaman tire kullanýrým
 int main()
 {
 	sayilar node;
 	node.sayi=(int*)malloc(sizeof(int)); // sayýlar kadar sayilar pointer tipinde yer ayýrýr.
 	printf("sayi giriniz:");
 	scanf("%d",&node.sayi);
 	while(node.sayi>=0){
 	 node.sayac++;
 		realloc(node.sayi,(node.sayac+1)*sizeof(int));// bellek büyüklüðünü deðiþtirmek istersek ,geriye deger dönmez
 		printf("sayi giriniz:");
 	     scanf("%d",&node.sayi[node.sayac]);
	 }
	 getch();
	 return 0;
 }
 
