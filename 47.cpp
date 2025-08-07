#include <stdio.h>
#include <math.h>
int main() {
	int n;
	double x, xn, S=0, i=0;
	scanf("%d %lf", &n, &x);
	if (n<=0)
	printf("ERROR");
	else 
	{
		while (i<=n)
		{
			xn=pow(-1,i)*pow(x,i); 
			S=S+xn; 
			i++; 
		} 
		printf("%lf", S); 
	} 
	return 0; 
} 
