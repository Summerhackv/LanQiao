/*Transform a number from Hexadecimal to Octal*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define  BIT  8

int Trans16To10(char *);
int *Trans10To8(int );


int main (void)
{
	int i,j;
	int Num;
	scanf("%d",&Num);
	
	int Midd[Num];
	int *Output[Num];
	char Input[Num][BIT];
	
	for (i=0;i<Num;i++)
	{
		scanf("%s",Input[i]);
		Midd[i]=Trans16To10(Input[i]);
		Output[i]=Trans10To8(Midd[i]);
	}
	//for (i=0;i<Num;i++)
	//	printf("%d\n",Midd[i]);
	
	for (j=0;j<Num;j++)
		printf("%d\n",Output[j]);
	
	return 0;
}

int Trans16To10(char *Str)
{
	int i;
	int ASCII;
	int Length;
	char In[BIT];
	double Sum=0;
	
	strcpy(In,Str);
	Length=strlen(In);

	
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
	int j=0;
	int N=8;
	int *Adress;
	int Output[BIT];
	
	printf("Midd=%d\n",Midd);
	Output[0]=Midd%8;
	for(i=1;i<BIT;i++)
	{
		
		if (Midd/N==0)
			break;
		else
		{
			Output[i]=Midd/N%8;
			N=N*8;
			j++;
		}	
			
	}
	printf("Output:\n");
	for (i=0;i<j;i++)
		printf("%d",Output[j]);
	printf("\n");
	Adress=Output;
	return Adress;	
}



