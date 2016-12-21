 /* MaoPao */
 #include <stdio.h>
 
 int main (void)
 {
	/*Initialization*/
	int N;
	int Midd;
	int i,j,k;
	scanf ("%d",&N);
 	
 	/*Input*/
 	int Num[N];
 	for (k=0;k<N;k++)
 		scanf("%d",&Num[k]);
 	
	/*Sort*/	
 	for (i=0;i<N;i++)
 	{
 		for (j=N-1;j>i;j--)
 		{
 			if(Num[i]>Num[j])
 			{
 				Midd=Num[i];
 				Num[i]=Num[j];
 				Num[j]=Midd;
			}
		}
	}
	
	/*Output*/
	for (k=0;k<N;k++)
		printf("%d ",Num[k]);
	return 0;
 }
