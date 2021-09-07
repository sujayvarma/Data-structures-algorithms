#include<stdio.h>
#include<conio.h>
int partition(int a[],int low,int high)
{
    int i=(low-1),j,pivot=a[high],temp;
    for(j=low;j<=high-1;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return(i+1);
}
void quicksort(int a[],int beg,int end)
{
    int p;
    if(beg<end)
    {
        p=partition(a,beg,end);
        quicksort(a,beg,p-1);
        quicksort(a,p+1,end);
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
    quicksort(a,0,n-1);
    printf("The sorted array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

