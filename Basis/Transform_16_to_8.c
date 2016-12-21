/*Transform some numbers from Hexadecimal to Octal*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define  BIT  8

/*Function declaration*/
int Trans16To10 (char *Str);
int Trans10To8 (int Midd,int Output[]);


int main (void)
{
	/*Initialization*/
	int i,j;
	int Num;
	scanf("%d",&Num);
	
	int N[Num];
	int Midd[Num];
	int Output[BIT];
	int Out[Num][BIT];
	char Input[Num][BIT];
	
	/*Transform*/
	for (i=0;i<Num;i++)
	{
		scanf ("%s",Input[i]);
		Midd[i] = Trans16To10(Input[i]);  
		N[i] = Trans10To8(Midd[i],Output);
		
		for (j=0;j<N[i];j++)
			Out[i][j]=Output[j];	
	}
	
	/*Output*/
	for (i=0;i<Num;i++)
	{
		for (j=N[i]-1;j>=0;j--)
			printf ("%d",Out[i][j]);
		printf ("\n");
	}
	return 0;
} 

/*Transform Hexadecimal to Decimal*/
int Trans16To10 (char *Str)
{
	int i;
	int ASCII;
	int Length;
	char In[BIT];
	double Sum=0;
	
	strcpy(In,Str);
	Length = strlen(In);

	for (i=0;i<Length;i++)
	{
		ASCII = In[i];
		if(ASCII>=48&&ASCII<=57)    /*Use ASCII to transform*/
			Sum = Sum+(ASCII-48)*pow(16,Length-1-i);
		else
			Sum = Sum+(ASCII-55)*pow(16,Length-1-i);
	}
	return Sum;
}

/*Transform Decimal to Octal*/
int Trans10To8 (int Midd,int Output[BIT])
{
	int i;
	int j = 0;
	int N = 8;
		
	Output[0] = Midd%8;
	for (i=1;i<BIT;i++)
	{	
		if (Midd/N==0)
		{
			j++;
			break;
		}
		else
		{
			Output[i] = Midd/N%8;
			N = N*8;
			j++;
		}			
	}
	
	return j;
}

