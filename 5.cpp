#include<stdio.h>
int main () { 
int n , sum = 0 ;
printf("Enter a three-digit number : ") ;
scanf("%d" , &n) ;


sum = (n%10) + (n/10)%10 + n/100 ;
printf("Sum of digits of %d is %d " , n , sum) ;
return 0 ; 
}
