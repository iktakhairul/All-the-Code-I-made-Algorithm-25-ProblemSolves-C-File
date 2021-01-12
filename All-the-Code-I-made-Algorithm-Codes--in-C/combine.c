#include<stdio.h>
void search(int ar[],int m,int n){
   int s=0,e=n-1,i;
   int mid=(s+e)/2;
   while(s<=e && ar[mid]!=m){
    if(m<ar[mid]){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=(s+e)/2;
   }
   if(s>e){
    printf("Not found\n");
   }
   else{
    printf("Your search element %d is %d position",m,mid+1);
   }
}
void linear_search(int ar[],int m,int n){
    int i,a=0;
    for(i=0;i<n;i++){
        if(ar[i]==m){
            a=1;
            break;
        }
    }
    if(a==0) printf("Not found\n");
    else printf("Your search elememt %d is %d position",m,i+1);

}
int main(){
    int c;
    printf("Which search algorithm do you want to apply ?\n");
    printf("1. Linear Search \n");
    printf("2. Binary Search \n");
    printf("Enter your choise : \n");
    scanf("%d",&c);
    if(c==1){
int n,i,m,a=0;
    printf("Enter a array size : \n");
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter your search element : \n");
    scanf("%d",&m);
    linear_search(ar,m,n);
    }
    else{
int i,n,m;
    printf("Enter your array size : \n");
    scanf("%d",&n);
    printf("Enter a assending sort array :\n");
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter your search element : \n");
    scanf("%d",&m);
    search(ar,m,n);
    }

}
