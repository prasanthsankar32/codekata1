#include <stdio.h>
int main()
{
    int n, i;
    int num[100], sum = 0, avg;
    scanf("%d", &n);
    while (n > 100 || n <= 0)
    {
        scanf("%d", &n);
    }
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("%d", avg);
    return 0;
}