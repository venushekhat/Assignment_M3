#include<stdio.h>
main()
{
	int i,evennum=0,num;
	
	for(i=0;i<10;i++)
	{
		printf("input the numbers:");
       	scanf("%d",&num);	
	}
	for (i=0; i<=10; i++) 
	{
        if (i % 2 == 0) 
		{
            printf("%d ",num);
        }
    }
	
}
