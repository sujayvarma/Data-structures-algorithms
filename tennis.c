#include<stdio.h>
#include<conio.h>
int a[10][10],n;
void tour(int m)
{
    int i,j,k;
    for(i=0;i<n;i=i+m)
    {
        for(j=i;j<(i+m/2);j++)
        {
            for(k=0;(k<m/2);k++)
                a[j+m/2][k+m/2]=a[j][k];
        }
        for(j=i+m/2;j<i+m;j++)
        {
            for(k=0;k<m/2;k++)
                a[j-m/2][k+m/2]=a[j][k];
        }
    }
}
int main()
{
    int i,r,j;
    printf("Enter the no of players");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        a[i][0]=i+1;
    r=2;
    while(r<=n)
    {
        tour(r);
        r=r*2;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

}
