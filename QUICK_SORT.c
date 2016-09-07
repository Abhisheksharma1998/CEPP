/* QUICK SORT */

#include<stdio.h>
#define max 500
void quick_sort(int [],int ,int);
int partition(int [],int ,int);
int main()
{
    int n,i,a[max];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick_sort(a,0,n);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
}

void quick_sort(int a[],int low,int high)
{
    int pivot=0;
    if(low<high)
    {
        pivot=partition(a,low,high);
        quick_sort(a,low,pivot-1);
        quick_sort(a,pivot+1,high);
    }
}

int partition(int a[],int low,int high)
{
    int temp=0,pivot=a[high],i = low,j = high;
    while(i<j)
    {
        while(a[i]<pivot)
            i++;
        while(a[j]>=pivot)
            j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    a[high]=a[i];
    a[i]=pivot;
    return(i);
}







