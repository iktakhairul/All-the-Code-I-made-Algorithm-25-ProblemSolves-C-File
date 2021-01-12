#include<stdio.h>
void Qsort(int num[25],int f,int l){
   int i, j, pi, temp;

   if(f<l){
      pi=f;
      i=f;
      j=l;

      while(i<j){
         while(num[i]<=num[pi]&&i<l)
            i++;
         while(num[j]>num[pi])
            j--;
         if(i<j){
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
         }
      }

      temp=num[pi];
      num[pi]=num[j];
      num[j]=temp;
      Qsort(num,f,j-1);
      Qsort(num,j+1,l);

   }
}




void Isort (int data[25], int n ){
    int temp,i,j;
  for(i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;
		while(temp<data[j] && j>=0)
		{
			data[j+1] = data[j];
			--j;
		}
		data[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",data[i]);
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


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main(){
   int i, count, num[25],s;

   printf("How many elements : ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&num[i]);

    printf("Enter Choice : \n1. quick sort \n2.marge sort \n3.insertion sort\n");
    scanf("%d",&s);

    switch(s){

        case 1 :
            Qsort(num,0,count-1);
            printf("sorted elements: ");
            for(i=0;i<count;i++)
                printf(" %d",num[i]);
            break;

        case 2 :
            mergeSort(num,0, count -1);
            printf("\nSorted array is \n");
            printArray(num,count);
            break;

        case 3:
            Isort(num,count);
            break;
    default: printf("Wrong Input");


    }
   return 0;
}

