   #include<stdio.h>
   int main(){
   	int i,j;
	int m[2][3]={{3,3,5},
	             {4,7,5}};
	 int  toplam=0;
   	int min,max;
   	  /*deger atama 
   	  for(i=0;i<2;i++){
   	  	for(j=0;j<3;j++){
   	  		m[i][j]=0;
			 }
		 }
		 */
		 
   	/*toplama*/
   	for(i=0;i<2;i++){
   		for(j=0;j<3;j++){
   			toplam+=m[i][j];
		   }
	   }
   	/*min ve max bulma*/
   	min=m[0][0];
   	max=m[0][0];
   	for(i=0;i<2;i++){
   		for(j=0;j<3;j++){
   			if(m[i][j]<=min)
   			min=m[i][j];
   			if(m[i][j]>=max);
   			max=m[i][j];
		   }
	   }
	   printf("min=%d\n max=%d\n",min,max);
	   printf("toplam=%d",toplam);
	   return 0;
   }
