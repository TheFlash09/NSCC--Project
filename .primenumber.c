#include<stdio.h>
int main()
{
	int a,d,v=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		d=a%i;
		if(d==0)
		{
		   v+=1;
		}
	}
	if(v==2|| v==1)
	{
		printf("The entered number is prime number");
	}
	else
	{
		printf("The entered number is not prime number");
	}
	
}