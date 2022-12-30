#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    if(m*k>=n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}