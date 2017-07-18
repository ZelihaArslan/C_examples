 #include<stdio.h>
 int main()
 {
   char ad[30];
   double bakiye;
   int hesap;
   int secim;
   FILE *myPtr;
   if((myPtr=fopen("musteri.dat", "r"))==NULL)
    printf("dosya acilmadi\n");
    else{
    	printf("secim yapiniz:\n"
		        "1-parasi olmayan\n"
				" 2-borclu olan\n"
				" 3-parasi olan\n"		
				" 4-cikis");
		scanf("%d",&secim);
				while(secim!=4)
				{
					fscanf(myPtr,"%d %s %lf",&bakiye,ad,&hesap);
					switch(secim)
					{
						case 1:
							
								printf("hesapta bakiyesi olmayan:\n");
								while(!feof(myPtr))
								{
									if( bakiye=0)
									printf("%d %s %lf",hesap,ad,bakiye );
									fscanf(myPtr,"%d %s %lf",&hesap,ad,&bakiye );
								}
								break;
						case 2:
							
								printf("borclu olan:\n");
								while(!feof(myPtr))
								{
									if(bakiye<0)
									printf("%d %s %lf",hesap,ad,bakiye );
									fscanf(myPtr,"%d %s %lf",&hesap,ad,&bakiye);
								}
								break;		
						case 3:
							
								printf("hesapta bakiyesi olan:\n");
								while(!feof(myPtr))
								{
									if(bakiye>0)
									printf("%d %s %lf",hesap,ad,bakiye );
									fscanf(myPtr,"%d %s %lf",&hesap,ad,&bakiye);
								}
								break;	
					}
					rewind(myPtr);
					scanf("%d",&secim);
					
				}
				printf("program sonlandi\n");
				fclose(myPtr);
	}

 }
