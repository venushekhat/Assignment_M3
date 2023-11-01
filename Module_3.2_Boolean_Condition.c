#include<stdio.h>
main()
{
	int present;
	printf("\n\n\t Enter Any Number : ");
	scanf("%d",&present);
	if(present==1)
	{
		printf("\n\n\t Welcome...");
		printf("\n\n\t The Studen Is Present. ");
	}
	
	else{
		printf("\n\n\t Sorry");
		printf("\n\n\t student is absent.");
	}
}
