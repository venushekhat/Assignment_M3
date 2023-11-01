#include<stdio.h>
main()
{
	int i,num=0,j;
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Input :");
		scanf("%d",&num);
	}
	
	printf("\n\n enter the find number:");
	scanf("%d",j);

   for(i=0;i<5;i++)
   {
   	   if(num<0)
      {
      	printf("\n negative");
	  }
	  else
	  {
	  	printf("\n positive");
	  }
   }

}
