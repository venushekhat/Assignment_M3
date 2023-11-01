#include<stdio.h>
main()
{
	int i,oddnum=0,num,sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("input the numbers:");
       	scanf("%d",&num);
		   
		    if (num%2 == 1)
		 {
            sum += num;
         }	
	}


      printf("\n\n sum of odd numbers are:%d",sum);
	
}
