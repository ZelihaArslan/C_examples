/* 1 DEN 6 YA KADAR OLAN SAYILARIN  20 KEZ RASTGELE YAZIMI */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	for(i=1;i<=20;i++){
		printf("%5d",1+rand() % 6);
		if(i%4==0)
		printf("\n");
	
}
return 0;
}

