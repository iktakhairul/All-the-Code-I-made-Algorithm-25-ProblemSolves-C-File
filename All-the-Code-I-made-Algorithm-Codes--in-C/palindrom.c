#include <stdio.h>
int main()
{
    int n, rev = 0, re, a;

    printf("Enter an integer: ");
    scanf("%d", &n);

    a = n;


    while( n!=0 )
    {
        re = n%10;
        rev = rev*10 + re;
        n /= 10;
    }


    if (a == rev)
        printf("%d is a palindrome.", a);
    else
        printf("%d is not a palindrome.", a);

    return 0;
}
