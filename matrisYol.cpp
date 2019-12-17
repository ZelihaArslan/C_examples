#include<stdio.h>
void kisayol(int,int);
int matris[8][6]={{1,0,0,0,0,0},
                  {1,1,0,0,0,0},
				  {1,1,1,1,1,1},
				  {1,1,1,0,0,1},
				  {1,0,1,1,1,1},
				  {1,0,0,0,1,1},
				  {1,1,1,0,1,1},
				  {0,0,1,1,1,1}};
int yol[8][6]={0};

int main()
{
	int j=0,k=0;
	while(j<8)
	{
		while(k<6)
		{
			printf(	"%d\t", matris[j][k]);
			k++;
			
		}
		k=0;
		printf("\n");
		j++;
	}
	matris[0][0]=1;
	kisayol(0,0);
	
	return 0;
}

void kisayol(int x,int y)
{   
    yol[x][y]=1;
	printf("koordinatlar: %d ,%d\n",x,y);
	if(y>0 && matris[x][y-1]==1 && yol[x][y-1]==0)
	kisayol(x,y-1);
	if(x>0 && matris[x-1][y]==1 && yol[x-1][y]==0)
	kisayol(x-1,y);
	if(y<6 && matris[x][y+1]==1 && yol[x][y+1]==0)
	kisayol(x,y+1);
	if(x<8 && matris[x+1][y]==1 && yol[x+1][y]==0)
	kisayol(x+1,y);
	
}
