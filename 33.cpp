#include <stdio.h>
#include <math.h>
int main (){
	double x, y, a, b, c; 
	scanf("%lf %lf", &x, &y);
	 a = pow(x,2) + pow(y,2);
	 b = pow(x+y,2);
	 c = pow(x-y,2);
	 printf("%lf\n%lf\n%lf", a, b, c);
	 return 0; 
} 
