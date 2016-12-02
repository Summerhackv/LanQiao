#include <stdio.h>
#include <math.h>
#define MIN 100
#define MAX 999

int main (void)
{
	int i;
	int One;
	int Ten;
	int Hundred;
	
	for(i=MIN;i<=MAX;i++)
	{
		One=i%10;
		Ten=((i-One)/10)%10;
		Hundred=i/100;
		if(i==pow(One,3)+pow(Ten,3)+pow(Hundred,3))
			printf("%d\n",i);
	}
	return 0;	
}
