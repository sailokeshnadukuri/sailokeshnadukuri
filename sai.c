#include<stdio.h>
main()
{
	int m,p,c,e,d,total;
	float percentage;
	printf("enter values of m,p,c,e,d ");
	scanf(" %d %d %d %d %d",&m,&p,&c,&e,&d);
	total=m+p+c+e+d;
	printf("total is %d",total);
	percentage=(m+p+c+e+d)*100/500;
	printf(" \npercentage is %f",percentage);
	if(percentage>75)
	{
		printf("\nA grade");
	}
	else if(percentage>65)
	{
		printf("\nB grade");
	}
	else if(percentage>55)
	{
		printf("\n C grade");
	}
	else if(percentage>45)
	{
		printf("\n D grade");
	}
	else
	{
		printf("\n you failed");
	}
}
