/* BUBBLE SORT */

#include<stdio.h>
#define max 500
void bubble_sort(int [],int);
int main()
{
    int a[max],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
}


void bubble_sort(int a[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
}
