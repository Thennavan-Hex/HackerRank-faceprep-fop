#include<stdio.h>
int main()
{
    int friends,team,c;
    scanf("%d",&friends);
    scanf("%d",&team);
    c=friends/team;
    friends-=team*c;
    printf("The number of friends in each team is %d and left out is %d",c,friends);
    return 0;

}