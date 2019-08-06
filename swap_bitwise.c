#include <stdio.h>
#include <string.h>
 
void swap(int*, int *);
 
void main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    swap(&n, &m);
    printf("%d %d",n,m);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}