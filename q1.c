/* Given an array of n elements having 0 to n-1 numbers.
Find weather the array have a duplicate or not, if duplicate found print "YES" else "NO". */

#include<stdio.h>
#define max 500
void duplicate(int [],int);
int main()
{
    int a[max],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    duplicate(a,n);
    return 1;
}


void duplicate(int a[],int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            a[a[i]]*=(-1);
        else if(a[i]==0)
            a[i]=n;
        else if(a[i]<0 || a[i]==n)
            c++;
    }
    if(c==1)
        printf("YES");
    else
        printf("NO");
}
