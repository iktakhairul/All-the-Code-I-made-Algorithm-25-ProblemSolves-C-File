#include<stdio.h>
#define inf 999999

int min(int a,int b)
{
    return (a<b)?a:b;
}
int main()
{
int arr[100][100],i,j,k;
int coin[10];
int v,no_of_coins;

printf("Enter the value\n");
scanf("%d",&v);

printf("No of coins\n");
scanf("%d",&no_of_coins);

printf("Enter the coin values\n");
for(i=1;i<=no_of_coins;i++)
{
    scanf("%d",&coin[i]);
}
for(i=0;i<=no_of_coins;i++)
{
    for(j=0;j<=v;j++)
    {
        if(j==0) arr[i][j]=0;
        else if(i==0) arr[i][j]=inf;
        else{
            if(j-coin[i]<0) arr[i][j]=arr[i-1][j];
            else arr[i][j]=min(arr[i-1][j],1+arr[i][j-coin[i]]);
        }
    }
}
for(i=0;i<=no_of_coins;i++)
{
    for(j=0;j<=v;j++)
    {
        printf("%d  ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}

