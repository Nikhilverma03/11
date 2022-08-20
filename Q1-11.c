//1. Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>
int lcm(int, int);
int lcm(int m, int n)
{
    int i,result,gcd;
    for(i=1;(i<=m&&i<=n);i++)
    {
        if(m%i==0&&n%i==0)
            gcd=i;
    }
    result=(m*n)/gcd;
    return result;
}
int main()
{
    int a,b,LCM;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    LCM=lcm(a,b);
    printf("LCM of %d and %d is: %d",a,b,LCM);
    return 0;
}
