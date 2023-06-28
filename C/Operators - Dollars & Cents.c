#include<stdio.h>
int main()
{
    int f_dollor,f_cent,s_dollor,s_cent;
    scanf("%d",&f_dollor);
    scanf("%d",&f_cent);
    scanf("%d",&s_dollor);
    scanf("%d",&s_cent);

    int f_total=f_dollor+s_dollor;
    int c_total=(f_cent+s_cent)/100;
    printf("%d\n",f_total+c_total);
    int b_cent=(f_cent+s_cent)%100;
    printf("%d",b_cent);
}