// Enter the radius of a circular,calculate the area of the circular.
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323

int main (void)
{
	int Radius;
	double Area;
	scanf("%d",&Radius);
	if ( Radius < 0||Radius > 10000 )
	{
		printf ( "Input error!\n" );
		exit ( -1 );
	}
	else
	{
		Area = PI*Radius*Radius;
		printf ( "The area of the Circular with the Radius %d is %.7lf\n",Radius,Area );
	}
	return 0;
}
