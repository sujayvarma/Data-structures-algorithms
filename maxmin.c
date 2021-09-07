#include<stdio.h>
#include<conio.h>
int max,min;
void maxmin(int a[],int i, int j)
{
    int mid, max1,min1;
    if(i==j)
        {
        max=a[i];
    min=a[i];
        }
    else if(i==j-1)
        {
            if(a[i]>a[j])
            {
                max=a[i];
                min=a[j];
            }
            else
            {
                max=a[j];
                min=a[i];
            }
        }

    else
    {
        mid=(i+j)/2;
        maxmin(a,i,mid);
        max1=max;
        min1=min;
        maxmin(a,mid+1,j);
        if(max1>max)
            max=max1;
        if(min1<min)
            min=min1;
    }
}
int main()
{
    int n,a[20],i;
    printf("Enter no of terms:");
    scanf("%d",&n);
    printf("Enter the numbers");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    maxmin(a,0,n-1);
    printf("Max is %d",max);
    printf("Min is %d",min);
    return 0;
}
