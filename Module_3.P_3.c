#include<stdio.h>
main()
{
	int i,j,k;
	int height=15;
	for(i=1;i<=height;i++)
	{
		for(k=height-1;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
