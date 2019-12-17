#include<stdio.h>
void kisayol(int,int);
int matris[10][6]={ {1,0,0,0,0,0},
                    {1,1,0,0,0,0},
				    {1,1,1,1,1,1},
				    {1,1,1,0,0,1},
				    {1,0,1,1,1,1},
				    {1,0,0,0,1,1},
				    {1,1,1,0,1,1},
				    {0,0,1,1,1,1},
				    {0,0,1,0,1,1},
				    {1,0,1,1,1,1}};
int yol[10][6]={0}; //gittiði yola birdaha gitmesini engellemek için yoksa fonk sonsuz döngüye girer

int main()
{
	int j=0,k=0;//matrisi ekrana yazdýralým
	while(j<10)
	{
		while(k<6)
		{
			printf(	"%d\t", matris[j][k]);
			k++;
			
		}
		k=0; //döngüye tekrar girsin yeni satýrýn sütünlarýný yazabilmek için
		printf("\n");
		j++;
	}

	kisayol(0,0); //(0,0) yolunun parametrelerini aldýk ilk yol
	
	return 0;
}

void kisayol(int x,int y)
{   
  yol[x][y]=1; //gittiði her yere 1 ata  
  //giriþimiz ,baþlangýç belli olsun
  	matris[0][0]=1; //1. satýr 1. sütun her zaman 1 e eþit olsun
	printf("koordinatlar: %d ,%d\n",x,y);//koordinatlarý ekrana bastýr
	if(x==9 && y==5)   return;
	else{
		
	    if(x<10 && matris[x+1][y]==1 && yol[x+1][y]==0 )
    	    kisayol(x+1,y);
    	else if(y<6 && matris[x][y+1]==1 && yol[x][y+1]==0) 
		   //y küçük 6 ise sýnýrý aþmamýþsa ve y bir sonraki sütuna git
		   // yolu 1 ise ve gittiði yola bir daha gitmemesi için yol dizisini ekledi
		   //bir sonraki eger 0 ise fonk buraya girmesin  
           //y<6 saða gidip gidemeyeceðini kontrol eder,
           //matris eger yol1 ise gitsin çünkü 0 lar duvar
           //yol =0 ise oraya hiç gidilmemiþ rahatlýkla gidebiliriz demek
		    kisayol(x,y+1); 
	}
}
