#include <stdio.h>
int sum(int *vk,int r,int l)
{
    int s=0;
    for(int i=r;i<l;i++)
    {
        s+=vk[i];
    }
    return s;
}
int main()
{
    int n,v,s=0,vk[2004],k;
    scanf("%d %d",&n,&v);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&vk[i]);
    }
    for(int r=0;r<n;r++)
    {
        for(int l=r+1;l<=n;l++)
        {
            k=sum(vk,r,l);
            if(k==v)
            {
                s++;
            }
        }
    }
    printf("%d",s);
}
