/* Yang Hui triangle */ 
#include <stdio.h>

int main (void) 
{
	int i,j;
	int Num;
	scanf("%d",&Num);
	int Numbers[Num][Num];
	for(i=0;i<Num;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0||i==j)
			{
				Numbers[i][j]=1;
				printf("%d ",Numbers[i][j]);
			}		
			else
			{
				if(i>=2&&j>=1)
				{
					Numbers[i][j]=Numbers[i-1][j-1]+Numbers[i-1][j];
					printf("%d ",Numbers[i][j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
