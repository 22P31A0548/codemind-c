#include<stdio.h>
int main()
{
    int n,q,rem,rev=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        q=q/10;
        rev=(rev*10)+rem;
    }
    if(rev==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}