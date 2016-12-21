/* Simple selection sort */
#include <stdio.h>

int main (void)
{

	/*Initialization*/
	int N;
	int Min;
	int Mid;
	int i,j,k;
	scanf ("%d",&N);
	
	/*Input*/
	int Num[N];
	for (k=0;k<N;k++)
		scanf("%d",&Num[k]);
	
	/*Simple selection sort*/
	for (i=0;i<N;i++)
	{
		Min=i;
		for (j=i+1;j<N;j++)
		{
			if (Num[i]>Num[j])   /*Find the minor number*/
				Min=j;			
		}
		if (i!=Min)             /*Change*/
		{
			Mid=Num[i];
			Num[i]=Num[Min];
			Num[Min]=Mid;
		}	
	}
	
	/*Output*/
	for (k=0;k<N;k++)
		printf("%d ",Num[k]);
	
	return 0;
}
