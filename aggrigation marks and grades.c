#include <stdio.h>
main()
{
	int a,b,c,d,e,f,g;
	printf("Enter The 1st Subject Marks:");
	scanf("%d",&a);
	printf("Enter The 2nd Subject Marks:");
	scanf("%d",&b);
	printf("Enter The 3rd Subject Marks:");
	scanf("%d",&c);
	printf("Enter The 4rth Subject Marks:");
	scanf("%d",&d);
	e=(a+b+c+d)/4;
	printf("The Score is %d",e);
	if(e>75)
	{
		printf("The Grade Is Distinction");
	}
	else if(e>=60 && e<=75)
	{
		printf("The Grade Is First Class");
	}
	else if(e>=50 && e<60)
	{ 
	
		printf("The Grade Is Second Class");
	}
	else if(e>=40 && e<50)
	{
		printf("The Grade is Third Class ");
	}
	else
	{
		printf("Fail");
	}
}
