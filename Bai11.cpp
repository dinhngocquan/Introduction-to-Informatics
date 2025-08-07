#include <stdio.h>
int main() {
	int x, y, tmp;
	scanf("%d %d", &x, &y);
	tmp=x;
	x=y;
	y=tmp;
	printf ("%d %d", x, y);
	return 0; 
} 
