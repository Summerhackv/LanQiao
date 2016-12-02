#include <stdio.h>
#define MAX5 99999
#define MIN5 10000
#define MAX6 999999
#define MIN6 100000

int main (void)
{
	int Num;
	int i,j;
	int One5,One6;
	int Ten5,Ten6;
	int Hundred5,Hundred6;
	int Thousand5,Thousand6;
	int TenThous5,TenThous6;
	int HunThous6;
	scanf("%d",&Num);
	
	for (i=MIN5;i<=MAX5;i++)
	{
		One5=i%10;
		Ten5=(i/10)%10;
		Hundred5=(i/100)%10;
		Thousand5=(i/1000)%10;
		TenThous5=i/10000;
		if(One5==TenThous5&&Ten5==Thousand5&&
		Num==(One5+Ten5+Hundred5+Thousand5+TenThous5))
			printf("%d\n",i);
	}
	
	for (j=MIN6;j<=MAX6;j++)
	{
		One6=j%10;
		Ten6=(j/10)%10;
		Hundred6=(j/100)%10;
		Thousand6=(j/1000)%10;
		TenThous6=(j/10000)%10;
		HunThous6=j/100000;
		if((One6==HunThous6)&&(Ten6==TenThous6)&&(Hundred6==Thousand6)&&
		(Num==One6+Ten6+Hundred6+Thousand6+TenThous6+HunThous6))
			printf("%d\n",j);
	}
	return 0;
}
