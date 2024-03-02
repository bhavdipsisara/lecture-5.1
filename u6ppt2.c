#include<stdio.h>

int main()

{
	int a;
	printf("enter value");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("this number is nutral");
	}
	else if(a>0)
	{
		printf("this number is positive");
	}
	else if(a<0)
	{
		printf("this number is nagetive");
	}
	
	return 0;
}