#include <stdio.h>
int main()
{
int a , digit ;
printf("Enter a number : ") ;
scanf("%d",&a);
printf("Enter the digit : ") ;
scanf("%d" , &digit);


a = ( a * 10 ) + digit ;
printf("\nThe new number is %d " , a) ;
return 0;
}

