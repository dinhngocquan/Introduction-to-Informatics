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
	}
	for (i=0; i<n-1; i++)
	{
		f=pow(X[1], i)*Y[i];
		s+=f; 
	} 
	printf("%lf", s);
	return 0;
}
