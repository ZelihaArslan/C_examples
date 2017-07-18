#include<stdio.h>
#include <string.h>
int main()
{
	int i,b,c=0;
	char kelime [50];
	char sesliharf[16]= {'A' ,'I' ,'O' ,'U' ,'a' ,'ý' ,'o' ,'u' ,'E' ,'Ý' ,'Ö' ,'Ü' ,'e' ,'i' ,'ö' ,'ü' };
	printf("bir kelime yaziniz:");
	gets(kelime);
	for(i=0; i=' '; i++){
	for(b=0; b<=15; b++ ){
	if(kelime[i]==sesliharf[b]) c++;
	 } }
	printf("kelimedeki sesli harf sayisi \"%d\"" ,c);
	return 0;
}

