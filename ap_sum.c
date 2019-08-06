#include <stdio.h>

int main() {
    int first,diff,terms,sum=0,i;
    scanf("%d %d %d", &terms, &first, &diff);
    for(i=0; i<terms; i++) 
    {
        sum=sum+first;
        first=first+diff;
    }
printf("%d",sum);
return 0;
}