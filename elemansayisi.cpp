#include<stdio.h>
int main()
{
	int s,x,a[100],b[100],c[100];
	printf("bir eleman yaziniz:");
	scanf("%d",&x);
	for(s=0;s<x;s++){
	printf("a[%d]=",s);
	scanf("%d",&a[s]);
}
  for(s=0;s<x;s++){
  	printf("a[%d]=",s);
  	scanf("%d",&b[s]);
  }
  for(s=0;s<x;s++){
  	c[s]=a[s]+b[s];
  	printf("c[%d]=%d",s);
  }
  return 0;
}
