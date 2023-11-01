#include<stdio.h>
#include<math.h>
main()
{
	int size=8,i,j;
	
	for(i=size;i>-size;i--)
	{
		for(j=size;j>=abs(i);j--)
		{
			printf(" *");
		}
		printf(" \n");
	}
}
