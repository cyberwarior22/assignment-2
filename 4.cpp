#include <stdio.h>
int main()
{
printf("Enter two values : ") ;
int a , b ;
scanf("%d%d",&a,&b);
a = a * b ;
b = a / b ;
a = a / b ;
printf("\n%d %d",a ,b);

return 0;
}

