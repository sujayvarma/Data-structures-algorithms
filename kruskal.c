#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k ,a,b,u,v,n,ne=1;
int min,mincost=0,cost[10][10],parent[10];
int find(int);
int uni(int,int);
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int main()
{
    int i,j;
    printf("Enter no of cities");
    scanf("%d",&n);
    printf("Enter adjacency matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
    }}
    printf("The Minimum spanning tree is\n");
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
            }
        }
    }
    u=find(u);
    v=find(v);
    if(uni(u,v))
    {
        printf("% edge(%d %d)=%d\n",ne++,a,b,min);
        mincost+=min;
    }
    cost[a][b]=cost[b][a]=999;
}
printf("Min cost is %d",mincost);
return 0;
    }
