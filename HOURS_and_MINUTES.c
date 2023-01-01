#include<stdio.h>
int main()
{
   int m,hr,min;
   scanf("%d",&m);
   hr=m/60;
   min=m%60;
   printf("%d Hour(s) %d Minute(s)",hr,min);
}