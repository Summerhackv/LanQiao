/* Search the number */
#include <stdio.h>

int main (void)
{
	int i;
	int j=0;
	int Num;
	int Goal;
	scanf("%d",&Num);
	int Numbers[Num];
	for(i=0;i<Num;i++)
		scanf("%d",&Numbers[i]);
	scanf("%d",&Goal);
	for(i=0;i<Num;i++)
	{
		j++;
		if (Goal==Numbers[i])
		{
			printf("%d",j);
			break;
		}
	}
	if(Goal!=Numbers[i]&&j==Num)
		printf("-1\n");
	return 0;
} 
