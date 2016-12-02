#include <stdio.h>
#define MAX 9999
#define MIN 1000

int main (void)
{
	int i;
	int One;
	int Ten;
	int Hundred;
	int Thousand;
	
	for(i=MIN;i<=MAX;i++)
	{
		One=i%10;
		Ten=((i-One)/10)%10;
		Hundred=((i-One-Ten*10)/100)%10;
		Thousand=i/1000;
		if (One==Thousand&&Ten==Hundred)
			printf("%d\n",i);
	}
	return 0;
}
