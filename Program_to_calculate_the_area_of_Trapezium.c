#include<stdio.h>
int main()
{
    float b1,b2,h;
    float area;
    scanf("%f%f%f",&b1,&b2,&h);
    area=((b1+b2)*h)/2;
    printf("%0.4f",area);
}