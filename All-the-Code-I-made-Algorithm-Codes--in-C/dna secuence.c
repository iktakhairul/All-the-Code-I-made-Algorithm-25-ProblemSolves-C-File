#include<stdio.h>
#include<string.h>

int i,j,m,n,c[20][20],max=0,min=0;
char x[20],y[20],z[20],b[20][20];

void print1(int i,int j)
{
    if(i==0 || j==0)
        return;
    if(b[i][j]=='c')
    {
        print1(i-1,j-1);
        printf("%c",x[i-1]);
        max++;
    }
    else if(b[i][j]=='u')
        print1(i-1,j);
    else
        print1(i,j-1);
}

void lcs1()
{
    m=strlen(x);
    n=strlen(z);
    for(i=0; i<=m; i++)
        c[i][0]=0;
    for(i=0; i<=n; i++)
        c[0][i]=0;


    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
        {
            if(x[i-1]==z[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='l';
            }
        }
}
void print2(int i,int j)
{
    if(i==0 || j==0)
        return;
    if(b[i][j]=='c')
    {
        print2(i-1,j-1);
        printf("%c",y[i-1]);
        min++;
    }
    else if(b[i][j]=='u')
        print2(i-1,j);
    else
        print2(i,j-1);
}

void lcs2()
{
    m=strlen(y);
    n=strlen(z);
    for(i=0; i<=m; i++)
        c[i][0]=0;
    for(i=0; i<=n; i++)
        c[0][i]=0;


    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
        {
            if(y[i-1]==z[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='l';
            }
        }
}

int main()
{
    printf("Enter first sequence:");
    scanf("%s",x);
    printf("Enter secound sequence:");
    scanf("%s",y);
     printf("Enter 3rd sequence:");
    scanf("%s",z);
    printf("\nThe 1st LCS is ");
    lcs1();
    print1(m,n);
    printf("\nThe 2nd LCS is ");
    lcs2();
    print2(m,n);
    //printf("%d %d\n",max,min);
    if(max>min){
         printf("\nThe LCS is ");
    lcs1();
    print1(m,n);
    }
    else{
         printf("\nThe LCS is ");
    lcs2();
    print2(m,n);
    }
    return 0;
}
