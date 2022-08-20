//2. Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>
int hcf(int, int);
int hcf(int m, int n)
{
    int i,result,gcd;
    for(i=1;(i<=m&&i<=n);i++)
    {
        if(m%i==0&&n%i==0)
            gcd=i;
    }
    return gcd;
}
int main()
{
    int a,b,HCF;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    HCF=hcf(a,b);
    printf("HCF of %d and %d is: %d",a,b,HCF);
    return 0;
}
