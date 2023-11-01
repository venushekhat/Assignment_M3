//to find the simpel intrest

#include<stdio.h>
main()
{
	float principal,rate,time,interest;
	//float interest;//
	
	printf("\n\n\tEnter the principal : ");
	scanf("%f",&principal);
	
	printf("\n\n\tEnter the rate : ");
	scanf("%f",&rate);

	printf("\n\n\tEnter the time : ");
	scanf("%f",&time);

    interest = (principal * rate * time) / 100;
    printf("\n\n\tThe Simple interest is %f,",interest);
}
