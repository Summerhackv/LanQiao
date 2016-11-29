#include <stdio.h>
#include <stdlib.h>
#define NUM 10007
#define MAX 10000

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
	int Fibonacci[MAX];
	Fibonacci[0]=1;
	Fibonacci[1]=1;
	for (i=2;i<MAX;i++)
	{
		Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
		if(n==i+1)
		{
			remainder=Fibonacci[n-1]%NUM;
			printf("The remainder is %d\n ",remainder);
			exit(0);
		}
			
	}
	return 0;
}
 
