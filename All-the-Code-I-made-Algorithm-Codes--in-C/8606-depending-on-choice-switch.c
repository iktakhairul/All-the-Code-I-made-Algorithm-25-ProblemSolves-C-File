#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;

    for ( j = low; j <= high- 1; j++)
    {


        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }



    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }



    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }


}

void printArray2(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;


        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

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
    printf("Enter array size : \n");
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Which Method do you want to apply ?\n");
    printf("1. Insertion sort \n");
    printf("2. Marge sort \n");
    printf("3. Quick sort \n");
    int c;
    printf("Enter your choice : \n");
    scanf("%d",&c);
    if(c==1){
        insertionSort(arr,n);
    }
    else if(c==2){
        mergeSort(arr, 0, n - 1);
        printf("\nSorted array is \n");
        printArray(arr, n);
    }
    else{

    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray2(arr, n);
    }

}
