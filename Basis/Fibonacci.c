#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define NUM 10007
#define MAX 1000000

int main (void)
{
	int i;
	int n;
	int remainder;
	scanf("%d",&n);
	if(n<1||n>MAX)
	{
		printf("The input is error\n");
		exit(-1);
	}	 
	int *Fibonacci=(int *)malloc(1000000*sizeof(int)); 
	Fibonacci[1]=1;
	Fibonacci[2]=1;
	if (n<=2)
	{
		remainder=Fibonacci[n]%NUM;
		printf("The remainder is %d\n ",remainder);
	}
	else
	{
		for (i=2;i<=MAX;i++)
		{
			Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
			if(n==i)
			{
				remainder=Fibonacci[n]%NUM;
				printf("The remainder is %d\n ",remainder);
				exit(0);
			}
			
		}
	}
	return 0;
}
 
