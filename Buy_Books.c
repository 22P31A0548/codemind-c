#include <stdio.h>
int main()
{
    int n,a[10],b[10],i,s=0,c=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        c=c+b[i];
    
    }
    if(s>c)
    {
        printf("0");
        
    }
    else
    {
        printf("%d",c-s);
        
    }
    
}
