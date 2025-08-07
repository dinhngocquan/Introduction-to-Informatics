#include <stdio.h>
#include <math.h>
int main() {
	int n, i;
	double f, s=0; 
	scanf("%d", &n);
	int X[n], Y[n]; 
	for (i=0; i<n; i++)
	{
		scanf("%d", &X[i]);
		scanf("%d", &Y[i]); 
		f=pow(X[i]-Y[i], 2);
		s+=f; 
	}
	printf("%lf", sqrt(s));
	return 0;
}
