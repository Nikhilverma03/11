//5. Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
void prime(int);
void prime(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
    if(i==j)
        printf("%d ",i);
    }
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    prime(num);
    return 0;
}


