#include <stdio.h>
#include <limits.h>

int main (void)
{
	int i;
	int Num;
	int Max=INT_MIN;
	int Min=INT_MAX;
	int Sum=0;
	scanf("%d",&Num);
	int Number[Num];
	
	for (i=0;i<Num;i++)
	{
		scanf("%d",&Number[i]);
		Sum=Sum+Number[i];
		if (Max<Number[i])
			Max=Number[i];
		if(Min>Number[i])
			Min=Number[i];	
	}
	printf("%d\n%d\n%d\n",Max,Min,Sum);
	return 0;
}
