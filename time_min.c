#include <stdio.h>
int main() {
	int min,m, s;

	scanf("%d", &min);
    m=(min/60);
	s=(min-(m*60));
    printf("%d %d",m,s);
return 0;
}