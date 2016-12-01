/* show 32 numbers from 0 to 31 using 5-bit binary */
#include <stdio.h>
void showbit(int);

int main (void)
{
	int Num;
	for(Num=0;Num<32;Num++)
	{
		showbit(Num);
	}
	return 0;
} 

void showbit(int Num)
{
	int i,j;
	int Remainder[5];
	for(j=0;j<5;j++)
	{
		Remainder[j]=Num%2;
		Num=Num/2;	
	}
	for(i=4;i>=0;i--)
	{
		printf("%d",Remainder[i]);
	}
	printf("\n");
}
