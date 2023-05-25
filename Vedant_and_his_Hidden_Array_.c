#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,x;
        scanf("%ld %ld",&n,&x);
        if(n==1)
        {
            if(x%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else if(x%2==1)
        {
            if(n%2==0)
            {
                printf("Even
");
            }
            else
            {
                printf("Odd
");
            }
        }
        else
        {
            printf("Impossible
");
        }
    }
}