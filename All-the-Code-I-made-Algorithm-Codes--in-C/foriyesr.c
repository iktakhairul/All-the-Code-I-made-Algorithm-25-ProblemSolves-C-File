#include <stdio.h>
void house(int ar[],int n){
    int i;
    for( i=2;i<20;i++){
        ar[i]=ar[i-1]+ar[i-2];
    }
    return;
}
int main (){

    int ar[20],i;
    ar[0]=0;
    ar[1]=1;
    house(ar,20);

    for( i=0;i<20;i++){
        printf(" House no :%d \n", ar[i]);
    }
}
