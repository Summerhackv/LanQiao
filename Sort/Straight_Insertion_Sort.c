/*Straight Insertion Sort*/
#include <stdio.h>

int main (void)
{
	/*Initialization*/
	int N;
	int i,j,k;
	scanf("%d",&N);
	
	/*Input*/
	int Num[N+1];
	Num[0] = 0;
	for (i=1;i<=N;i++)
		scanf("%d",&Num[i]);
	
	/*Straight Insertion Sort*/	
	for (i=2;i<=N;i++)
	{
		if (Num[i]<Num[i-1])   //Change condition
		{
			Num[0]=Num[i];
			for (j=i-1;Num[j]>Num[0];j--)   //Move
				Num[j+1]=Num[j];
			Num[j+1]=Num[0];
		}
	}
	
	/*Output*/
	for (k=1;k<=N;k++)
		printf("%d ",Num[k]);
	
	return 0;
} 
