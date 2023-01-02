#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float area,perimeter;
    scanf("%d",&r);
    area=pi*r*r;
    perimeter=2*pi*r;
    printf("%0.2f
%0.2f",area,perimeter);
}