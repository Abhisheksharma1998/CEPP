/*SELECTION SORT*/

#include<stdio.h>
#define max 500
void selection_sort(int[],int);
int main()
{
    int i,n,a[max];
    scanf("%d",&n);
    for(i = 0;i<n;i++)
        scanf("%d",&a[i]);
    selection_sort(a,n);
    for(i = 0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}

void selection_sort(int a[], int n)
{
	int i, j,temp,smallest;
	for (i=0;i<n;i++)
    {
        smallest = i;
		for (j = i; j < n; j++)
        {
			if (a[j] < a[smallest])
				smallest = j;
		}
		temp = a[i];
		a[i] = a[smallest];
		a[smallest] = temp;
	}
}
