#include<stdio.h>
int main()
{
    int total,per_cpy,cost;
    scanf("%d",&total);
    scanf("%d",&per_cpy);
    scanf("%d",&cost);
    per_cpy-=cost;
    total=total*per_cpy-100;
    printf("%d",total);
    return 0;
}