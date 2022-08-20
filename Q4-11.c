//4. Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
int prime(int);
int prime(int n)
{
    int i,j;
    for(i=n+1;1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
    if(j==i)
        break;
    }
    return i;
}
int main()
{
    int num,PRIME;
    printf("Enter any number: ");
    scanf("%d",&num);
    PRIME=prime(num);
    printf("Next prime number is %d",PRIME);
    return 0;
}

