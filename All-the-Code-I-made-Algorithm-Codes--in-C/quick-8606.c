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

int main(){
   int i, count, num[25];

   printf("How many elements : ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&num[i]);

   Qsort(num,0,count-1);
   printf("sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",num[i]);

   return 0;
}
