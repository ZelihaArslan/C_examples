#include<stdio.h>
#include<string.h>
int main(void)
{
	char cumle[255];
	int i=0;
	printf("cumleyi giriniz:");
	gets(cumle);
	printf("cumlenin ilk hali: %s \n",cumle);
	for(i=0;i<cumle[i]!='\0'; i++)
	{
		if(cumle[i]>=65 && cumle[i]<=90)
		cumle[i]+=32;
		else if(cumle[i]>=97 && cumle[i]<=122)
		cumle[i]-=32; 
	}
	printf("cumlenin son hali:\"% s\" \n ", cumle);
	return 0;
	
}
