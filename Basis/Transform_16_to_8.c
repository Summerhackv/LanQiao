/*Transform a number from Hexadecimal to Octal*/
#include <stdio.h>
#define  BIT  8
int Trans16To10(char );
int *Trans10To8(int );


int main (void)
{
	int i,j;
	int Num;
	scanf("%d",&Num);
	
	int Midd[Num];
	int Output[Num];
	char *Out[Num];
	char Input[Num][BIT];
	
	for (i=0;i<Num;i++)
	{
		gets(Input[i][BIT]);
		Midd[i]=Trans16To10(Input[i][BIT]);
		Out[i]=Trans10To8(Midd[i]);
	}
	
	for (j=0;j<Num;j++)
		printf("%d",Out[i]);
	printf("\n");
	return 0;
}

int Trans16To10(char Input)
{
	int i;
	int ASCII;
	int Length;
	char In[BIT];
	double Sum=0;
	
	Length=strlen(Input);
	In[BIT]=Input;
	
	/*Transform*/
	for (i=0;i<Length;i++)
	{
		ASCII=In[i];
		if(ASCII>=48&&ASCII<=57)
			Sum=Sum+(ASCII-48)*pow(16,Length-1-i);
		else
			Sum=Sum+(ASCII-55)*pow(16,Length-1-i);
	}
	return Sum;
}

int *Trans10To8(int Midd)
{
	int i;
	int N=8;
	int Output[BIT];
	
	/*Transform*/
	Output[0]=Midd%8;
	for(i=1;i<BIT;i++)
	{
		
		if (Midd/N==0)
			break;
		else
		{
			Output[i]=Midd/N%8;
			N=N*8;
		}	
			
	}
	return Output;
	
}
