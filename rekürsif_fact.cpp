#include<stdio.h>
 
 int fact(int no)
 {
 	
 	if(no<=1){
 		return 1;
			 }
	else
		{
		return no*(fact(no-1));
		}			 
 }
 int main()
 {
 int i,x;
 printf("bir sayi giriniz:");
 scanf("%d",&i);
 for(x=0;x<=i;x++)
 {
 	printf("%d!=%d\n",x,fact(x));

}
}
