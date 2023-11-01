//to find the area of circle,rectangle, and tringle//

#include<stdio.h>
main()
{
	int r;
	float pi=3.14,area;
	
	printf("\n\n\tInput the value of radious : ");
	scanf("%d",&r);
	 
	 float l,breadth;
	printf("\n\n\tInput the value of length : ");
	scanf("%f",&l);
	
	printf("\n\n\tInput the value of breadth : ");
	scanf("%f",&breadth);
	

    float base,h ;
	printf("\n\n\tInput the value of base : ");
	scanf("%f",&base);
	
	printf("\n\n\tInput the value of height : ");
	scanf("%f",&h);
	
	area=pi*(r*r);
	printf("\n\n\t area of circle : %.2f",area);
	
    area=l*breadth;
	printf("\n\n\tArea of rectangle = %.2f",area);
	
	area=base*h/2;
	printf("\n\n\tArea of Tringle = %.2f",area);
}

