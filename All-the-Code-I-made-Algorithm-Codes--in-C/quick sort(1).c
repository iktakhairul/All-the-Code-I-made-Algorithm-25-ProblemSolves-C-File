#include<stdio.h>

int partition(int ar[],int p, int r)
{
    int x,i,j,t;
    x=ar[r];
    i=p-1;
    for(j=p;j<r-1;j++)
    {
        if(ar[j]<=x)
        {
            i++;
            t=ar[i];
            ar[i]=ar[j];
            ar[j]=t;
        }
    }
    t=ar[i+1];
    ar[i+1]=ar[r];
    ar[r]=t;
    return i+1;
}

void quickSort(int ar[],int p, int r)
{
    int q,i;
    if(p<r)
    {
        q= partition(ar,p,r);
        quickSort(ar,p,q-1);
        quickSort(ar,q+1,r);
    }

}

void print(int ar[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");

}

int main()
{
    printf("How many students : ");
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        printf("\nstudents height %d: ", i);
        scanf("%d",&ar[i]);
    }

    quickSort(ar,0,n-1);
    printf("Students height in sorted way  : ");
    print(ar,n);
}
