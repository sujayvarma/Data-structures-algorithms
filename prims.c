#include<stdio.h>
#include<conio.h>
#define MAX 10
int adj[MAX][MAX],tree[MAX][MAX],n;
void readmatrix()
{
    int i,j;
    printf("Enter no of vertices");
    scanf("%d",&n);
    printf("Enter adjacency matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&adj[i][j]);
    }
}
int spanningTree(int src)
{
    int i,j,k,min,u,v,cost,visited[MAX],parent[MAX],d[MAX];
    for(i=1;i<=n;i++)
    {
        d[i]=adj[src][i];
        visited[i]=0;
        parent[i]=src;
    }
    visited[src]=1;
    cost=0;
    k=1;
    for(i=1;i<=n;i++)
    {
        min=999;
        for(j=1;j<=n;j++)
        {
            if((visited[j]==0)&&(d[j]<min))
            {
                min=d[j];
                u=j;
                cost+=d[u];
            }
        }
        visited[u]=1;
        cost+=d[u];
        tree[k][1]=parent[u];
        tree[k++][2]=u;
        for(v=1;v<=n;v++)
        {
            if((visited[v]==0)&&(adj[u][v]<d[v]))
            {
                d[v]=adj[u][v];
                parent[v]=u;
            }
        }
    }
    return cost;
}
void display(int cost)
{
    int i;
    for(i=1;i<n;i++)
        printf("%d %d\n",tree[i][1],tree[i][2]);
    printf("Minimum cost is %d",cost);
}
int main()
{
    int source,cost;
    readmatrix();
    printf("Enter source");
    scanf("%d",&source);
    cost=spanningTree(source);
    display(cost);
}
