#include<stdio.h>
#include<conio.h>
int x[10];
int place(int k,int i)
{
    int j;
    for(j=1;j<k;j++)
    {
        if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
            return 0;
    }
    return 1;
}
void Nqueen(int k,int n)
{
    int i,z,w;
    for(i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                printf("\n");
                printf("1\t2\t3\t4\n");
                for(z=1;z<=n;z++)
                {
                    for(w=1;w<=n;w++)
                    {
                        if(w==x[z])
                            printf("Q\t");
                        else
                            printf("\t");
                    }
                    printf("\n");
                }
            }
            else
            Nqueen(k+1,n);
        }
    }
}
int main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    Nqueen(1,n);
}
