#include <stdio.h>
int main()
{
printf("Enter a number : ") ;
int a , digit ;
scanf("%d",&a);

digit = a % 10 ; 
a = a - digit ;
printf("\nThe new number is %d " , a) ;
return 0;
}

