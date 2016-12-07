/*Transform a number from Hexadecimal to Decimalism*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#define NUM 8

int main (void)
{
	/*Initialization*/
	int i;
	int ASCII;
	int Length;
	double Sum=0;
	char Input[NUM];
	
	/*Input*/
	gets(Input);
	Length=strlen(Input);
	
	/*Transform*/
	for (i=0;i<Length;i++)
	{
		ASCII=Input[i];
		if(ASCII>=48&&ASCII<=57)
			Sum=Sum+(ASCII-48)*pow(16,Length-1-i);
		else
			Sum=Sum+(ASCII-55)*pow(16,Length-1-i);
	}
	
	/*Output*/
	printf("%.0f\n",Sum);
	return 0;
} 
