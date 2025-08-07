#include <stdio.h>
int main() {
	unsigned int n, s=0, i;
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	s+=i;	 
	printf("%d", s);
	return 0; 
} 
