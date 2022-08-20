//8. Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>
int factorial(int);
int combination(int,int);
void pascal(int);
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int combination(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
void pascal(int n)
{
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for(k=0;k<=n-i;k++)
            printf(" ");
        for(j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
    printf("\n");
    }
}
int main()
{
    int n,r;
    printf("Enter the value of n and r: ");
    scanf("%d %d",&n,&r);
    combination(n,r);
    pascal(n);
    return 0;
}
