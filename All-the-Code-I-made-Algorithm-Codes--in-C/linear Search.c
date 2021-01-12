#include<stdio.h>
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

int main()
{
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
