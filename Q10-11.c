//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
void sum(int);
void sum(int n)
{
    int i,result=0,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        result=result+(fact/i);
    }
    printf("%d", result);
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    sum(num);
    return 0;
}
