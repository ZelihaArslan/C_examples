#include<stdio.h>
#include<string.h>
int main()
{ int i=0; 
char sayi[100];
printf("bir sayi yaziniz:");
gets(sayi);
for(i=strlen(sayi)-1 ;i>=0; i--){
	printf("%c", sayi[i]);
}
printf("\n");
return 0;
}
