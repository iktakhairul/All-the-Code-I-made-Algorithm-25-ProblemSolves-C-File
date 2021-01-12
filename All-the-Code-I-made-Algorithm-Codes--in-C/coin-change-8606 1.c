#include <stdio.h>
#include <stdlib.h>

void min_coins(int coin_value[],int n,int amount){
  int i ;
  for(i= 0; i < n; i++ )
    while(amount >= coin_value[i])
    {

      amount= amount - coin_value[i];
      printf("%d  ",coin_value[i]);
    }
  printf("\n");

}


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int main()
{
  int i,j,n,amount;
  printf( "Enter amount to be paid: ");
  scanf( "%d",&amount);
  printf( "Enter total kinds of currency: \n");
  scanf("%d",&n);
  int coin_value[n];
  printf( "Enter all currency values: ");
  for(i = 0;i< n; i++)//
    scanf("%d",&coin_value[i]);
  qsort(coin_value, n, sizeof(int), cmpfunc);
  printf( "The selected currecy values are: \n");
  min_coins(coin_value,n,amount);
  return 0;
}
