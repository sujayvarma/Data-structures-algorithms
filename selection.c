#include<stdio.h>
#include<conio.h>
void select(int a[],int n)
{
    int min,i,temp,j;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
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
    select(a,n);
    printf("The sorted array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
