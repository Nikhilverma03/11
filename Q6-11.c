//6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>
void prime(int,int);
void prime(int m, int n)
{
    int i,j;
    for(i=m;i<=n;i++)
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
    int a,b;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    prime(a,b);
    return 0;
}
