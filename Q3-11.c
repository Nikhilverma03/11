//3. Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>
int prime(int);
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        return 1;
    else
        return 0;
}
int main()
{
    int num,PRIME;
    printf("Enter any number: ");
    scanf("%d",&num);
    PRIME=prime(num);
    if(PRIME)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    return 0;
}

