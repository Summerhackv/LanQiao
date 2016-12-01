/* Judge the leap year */
#include <stdio.h>

int main (void)
{
	int Year;
	scanf("%d",&Year);
	if(Year%4!=0)
		printf("no\n");
	else
	{
		if(Year%100!=0||Year%400==0)
			printf("yes\n");
		else
		{	
			printf("no\n");	
		}	
	}
	return 0;
}

