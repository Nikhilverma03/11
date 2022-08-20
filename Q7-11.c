//7. Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>
void fibonacci(int);
void fibonacci(int n)
{
    int i,a=0,b=1,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
}
int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}
