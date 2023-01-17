#include <stdio.h>
int main()
{
    
    int x = sizeof(double);
    printf("size of double type variable is %d" , x);
    int y = sizeof(float);
    printf("\nsize of float type variable is %d" , y);
    int z = sizeof(int);
    printf("\nsize of int type variable is %d" , z);
    int a= sizeof(char);
    printf("\nsize of char type variable is %d" , a);
}
