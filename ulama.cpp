#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,a=0,b=0;
	char cumle[100], sesli[16]={'A','E','I','Ý','O','Ö','U','Ü','a','e','ý','i','o','ö','u','ü'};
	printf("bir cumle yaziniz:");
	gets(cumle);
	for(i=0; i<=strlen(cumle); i++){
		int sesliharf=0;
		if(cumle[i]==' '){
			for(a=0; a<16; a++){
				if(cumle[i-1]==sesli[a])
				sesliharf=1;
			}
			if(sesliharf==0){
				for(b=0;b<16;b++);
				if(cumle[i+1]==sesli[b]){
				
				sesliharf=1;
			}
			if(sesliharf=1)
		
			printf("ulama vardir\n");
			else
			printf("ulama yoktur\n");
		}
	}
	
}
return 0;
}

