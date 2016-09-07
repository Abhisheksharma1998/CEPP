/* MERGE SORT */
#include<stdio.h>
#define max 500
void merge(int [],int,int,int);
void merge_sort(int [],int,int);
int main()
{
    int i,n,a[max];
    scanf("%d",&n);
    for(i = 0;i<n;i++)
        scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    for(i = 0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}

void merge(int a[],int p,int q,int r)
{
    int n1=q-p+1,n2=r-q,i,lv=0,rv=0,la[max],ra[max];
    for(i = 0;i<n1;i++)
        la[i] = a[p+i];
    for(i = 0;i<n2;i++)
        ra[i] = a[q+i+1];
    for(i = p;i<=r;i++)
    {
            if(lv == n1)
            {
                a[i] = ra[rv];
                rv++;
            }
            else if(rv == n2)
            {
                a[i] = la[lv];
                lv++;
            }
            else if(la[lv]<=ra[rv])
            {
                a[i] = la[lv];
                lv++;
            }
            else
            {
                a[i] = ra[rv];
                rv++;
            }
    }
}

void merge_sort(int a[],int low,int high)
{
    int mid = 0;
    if(low<high){

        mid = (low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }

}
