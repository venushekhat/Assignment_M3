//WAP to check in the given year is a leap year or not.//

#include<stdio.h>
int 
main() 
{
    int year;

    printf("\n\n\tEnter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	{
        printf("\n\n\t%d is a leap year.\n", year);
    } else {
        printf("\n\n\t%d is not a leap year.\n", year);
    }
}

