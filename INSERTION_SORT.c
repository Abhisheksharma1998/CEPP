/* INSERTION SORT */

#include<stdio.h>
#define max 500
void insertion_sort(int [],int);
int main()
{
    int a[max],n,i,j,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    insertion_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
}


void insertion_sort(int a[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0 && a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
}
