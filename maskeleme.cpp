#include<stdio.h>
int main()
{
	unsigned int x=3,y=1,sum,carry;
	sum=x^y;
	carry=x&y;
	while(carry!=0)
	{
		carry=carry<<1;
		x=sum;
		y=carry;
		sum= x^y;
		carry=x&y;
	}
	printf("%d",sum);
	getchar();
	return 0;

}
