//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
//and convert it into USD.

#include <stdio.h>
int main()
{
	float USD ,INR;
	printf("enter INR");
	scanf("%f",&INR);
	
	USD = INR / 76.23;
	printf("usd is %f",USD);
}


