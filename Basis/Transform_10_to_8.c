/*Transform_10_to_8*/
#include <stdio.h>
#define NUM 8

int main (void)
{
	/*Initialization*/
	int i,j;
	int N=8;
	int Input_Num;
	int Output[NUM];
	
	/*Input*/
	scanf("%d",&Input_Num);
	
	/*Transform*/
	Output[0]=Input_Num%8;
	for(i=1;i<NUM;i++)
	{
		
		if (Input_Num/N==0)
			break;
		else
		{
			Output[i]=Input_Num/N%8;
			N=N*8;
		}	
			
	}
	
	/*Output*/
	for (j=i-1;j>=0;j--)
		printf("%d",Output[j]);
	printf("\n");
	return 0;
}
