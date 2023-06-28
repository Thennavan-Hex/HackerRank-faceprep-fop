#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=(a*b)/100;
    e=((a-d)*c)/100;
    f=a-(d+e);
    g=f/3;
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d",g);
}