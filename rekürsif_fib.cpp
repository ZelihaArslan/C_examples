#include<stdio.h>
int fib(int i)
{
	if(i==0 || i==1)
	return i;
	else{
	return fib(i-1)+fib(i-2);	
		}
}
int main()
{
	int x,y;
	printf("bir sayi giriniz:");
	scanf("%d",&x);
	y=fib(x);
	printf("fin(%d)=%d\n",x,y);
	return 0;
}

