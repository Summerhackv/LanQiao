#include <stdio.h>
#include <limits.h>

int main (void)
{
	int i;
	signed int Num;
	signed int Sum=0;
	signed int Max=INT_MIN;
	signed int Min=INT_MAX;
	scanf("%d",&Num);
	unsigned int Number[Num];
	
	for (i=0;i<Num;i++)
	{
		scanf("%d",&Number[i]);
		if(Number[i]>Max)
			Max=Number[i];
		if(Number[i]<Min)
			Min=Number[i];
		Sum=Sum+Number[i];
	}
	printf("%u\n",Max);
	printf("%u\n",Min);
	printf("%u\n",Sum);
	return 0;
	
}
