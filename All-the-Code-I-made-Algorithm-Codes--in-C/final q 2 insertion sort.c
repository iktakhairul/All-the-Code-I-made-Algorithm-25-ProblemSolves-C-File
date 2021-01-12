#include <stdio.h>
#include <math.h>


void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;


       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
}

int main()
{
    printf("Enter Notes number :");
    int n,i;
    scanf("%d",&n);
    int arr[n];

   for(i=0;i<n;i++){
        printf("Enter Notes :");
    scanf("%d",&arr[i]);
   }

    insertionSort(arr, n);


    return 0;
}
