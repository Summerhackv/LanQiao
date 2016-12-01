/* The letters are output in both reverse order and positive order */
#include <stdio.h>

int main (void)
{
	int i,j,k;
	int row; 
	int column; 
	scanf("%d %d",&row,&column);
	
	for(i=0;i<row;i++)
	{
		if(i==0)   // The first row
		{
			for(j=0;j<column;j++)       
				printf("%c",'A'+j);
		}
		else   // The row from the second to the last
		{
			for(k=i;k>=1;k--)    
				printf("%c",'A'+k);
			for(j=0;j<column-i;j++)
				printf("%c",'A'+j);
		}
		printf("\n");
	}
	return 0;
}
