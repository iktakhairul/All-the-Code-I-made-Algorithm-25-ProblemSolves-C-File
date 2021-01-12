#include<stdio.h>
#include<conio.h>

char que[20];
int front=0, rear=0, n;
char arr[20];
int bfs(int );
char ajMat[20][20];
char b[20];
void display();
int p=0;

int main()
{
    char v;
    int i, j;
    printf("Enter the number of nodes in a graph");
    scanf("%d",&n);
    printf("Enter the value of node of graph");
    for(i=0; i<n; i++)
    {
        scanf("%s",&b[i]);
    }

    printf("Enter the value in adjancency matrix in from of '1' or '0'\n");
    printf("If there exits an edge between two vertices than '1' otherwise '0'\n");
    for(i=0; i<n; i++)
    printf(" %c ",b[i]);
    for(i=0;i<n; i++)
    {
        printf("\n%c ",b[i]);
        for(j=0; j<n; j++)
        {
             printf("%c ",v=getch());
             ajMat[i][j]=v;
        }
        printf("\n\n");
    }
    for(i=0;i<n;i++)
    {
     bfs(i);
    }


    display();
    getch();
}

void display()
{
    int i;
     printf("BFS of Graph : ");
     for(i=0; i<n; i++)
     printf("%c ",arr[i]);
}

void insert(char val)
{
    que[front]=val;
    front++;
}

char del()
{
    rear=rear+1;
    return que[rear-1];
}

int unVisit(char val)
{
    int i;
    for(i=0; i<front; i++)
    {
         if(val==que[i])
         return 0;
    }
return 1;
}

int bfs(int i)
{
     char m;
     int j;
     if(front==0)
     {
         insert(b[i]);
     }
     for(j=0; j<n; j++)
     {
         if(ajMat[i][j]=='1')
         {
              if(unVisit(b[j]))
              {
                   insert(b[j]);
              }
         }
     }
     m=del();
     arr[p]=m;
     p++;
     return 0;
}
/*
OUTPUT:
Enter the number of nodes in a graph5
Enter the value of node of grapha
b
c
d
e
Enter the value in adjancency matrix in from of 'y' or 'n'
If there exits an edge between two vertices than 'y' otherwise 'n'
  a  b  c  d  e
a n  y  n  y  n


b y  n  y  n  n


c n  y  n  y  y


d y  n  y  n  y


e n  n  y  y  n

BFS of Graph : a b d c e */
