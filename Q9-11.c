//9. Write a program in C to find the square of any number using the function.

#include<stdio.h>
int square(int);
int square(int n)
{
    int r=n*n;
    return r;
}
int main()
{
    int num,SQUARE;
    printf("Enter number: ");
    scanf("%d",&num);
    SQUARE=square(num);
    printf("Square of %d is %d",num,SQUARE);
    return 0;
}
