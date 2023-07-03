#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,pr;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        if(i%2==0)
        {
            pr=pow(i,2)-2;
            printf("%d ",pr);
        }
        else
        {
            pr=pow(i,2)-1;
            printf("%d ",pr);
        }
    }
}


