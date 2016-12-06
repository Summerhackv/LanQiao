#include <stdio.h>
#define NUM 8

int main (void)
{
	int i,j;
	int N=16;
	int Input_Num;
	int Output[NUM];
	scanf("%d",&Input_Num);
	
	/*Transform*/
	Output[0]=Input_Num%16;
	for(i=1;i<NUM;i++)
	{
		
		if (Input_Num/N==0)
			break;
		else
		{
			Output[i]=Input_Num/N%16;
			N=N*16;
		}	
			
	}
	
	/*Output*/
	for (j=i-1;j>=0;j--)  
	{
		if (Output[j]<=9)
		{
			printf("%d",Output[j]);
		}	
		else
			switch (Output[j])
			{
				case 10: printf("A");
					break;
				case 11: printf("B");
					break;
				case 12: printf("C");
					break;
				case 13: printf("D");
					break;
				case 14: printf("E");
					break;
				case 15: printf("F");
					break;
			}	
	}	
	printf("\n");
	return 0;
	
}
