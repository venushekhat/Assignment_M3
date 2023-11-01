#include<stdio.h>
main()
{
	int i,evennum=0,num,sum;
	
	for(i=0;i<10;i++)
	{
		printf("input the numbers:");
       	scanf("%d",&num);
       	
       	if(num%2==0)
       	{
       	    printf("numbers are:%d",i);
		}
	}
	printf("count of even numbers: %d\n",evennum);
	

}
