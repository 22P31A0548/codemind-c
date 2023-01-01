#include<stdio.h>
int main()
{
    int a,b,sum,diff,pro,quo,rem;
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    rem=a%b;
    printf("Sum:%d
",sum);
    printf("Difference:%d
",diff);
    printf("Product:%d
",pro);
    printf("Quotient:%d
",quo);
    printf("Remainder:%d",rem);
}