#include<stdio.h>
main()
{
	int i,oddnum=0,num;
	
	for(i=0;i<10;i++)
	{
		printf("input the numbers:");
       	scanf("%d",&num);
       	
       	if(num%2==1)
       	{
       		oddnum++;
		}
	}
	printf("count of odd numbers: %d\n",oddnum);
}
