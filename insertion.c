#include<stdio.h>
#include<conio.h>
void insertion(int a[],int n)
{
    int i,j,temp;
    for (i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((j>=0)&&(a[j]>temp))
            {
                a[j+1]=a[j];
                j--;
            }
        a[j+1]=temp;
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
    insertion(a,n);
    printf("The sorted array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
