#include<stdio.h>
#include<conio.h>
void merge(int a[],int beg,int mid,int end)
{
   int i,j,k,temp[20];
    i=beg;
    j=mid+1;
    k=beg;
    while((i<=mid)&&(j<=end))
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
           temp[k]=a[j];
            k++;
            j++;
        }
    }
    if(i>mid)
    {
        while(j<=end)
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
            {
       temp[k]=a[i];
            k++;
            i++;}
    }
    for(i=beg;i<=end;i++)
    {
        a[i]=temp[i];
    }
}
void mergesort(int a[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
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
    mergesort(a,0,n-1);
    printf("The sorted array is:");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
