#include <stdio.h>

int main (void)
{
	int i;
	int n;
	int sum = 0;	
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		sum = sum+i;
	printf("The sum of the numbers from 1 to %d is %d\n",n,sum);
	return 0;
}
  
