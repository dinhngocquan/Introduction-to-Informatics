#include <stdio.h>
#include <math.h>
int main() {
	int n;
	double x, xn, S=1, i=1, ngt=1;
	scanf("%d %lf", &n, &x);
	if (n<=0)
	printf("ERROR");
	else 
	{
		while (i<=n)
		{
			ngt=ngt*i; 
			xn=pow(x,i)/ngt; 
			S=S+xn; 
			i++;  
		} 
		printf("%lf", S); 
	} 
	return 0; 
}
