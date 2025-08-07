#include <stdio.h>
#include <math.h> 
int main() {
	double a, b, c, delta, x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a==0)
		{
		if (b==0 && c==0)
		printf("Phuong trinh vo so nghiem");
		if (b==0 && c!=0)
		printf("Phuong trinh vo nghiem"); 
		if (b!=0)
		printf("%lf", -c/b); 
		} 
	else
	{
	delta=pow(b,2)-4*a*c;
	if (delta>0)
		{
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("%lf\n%lf", x1, x2); 
		}
	if (delta==0)
		printf("%lf", -b/(2*a));
	if (delta<0) 
		{
		printf("%lf+i%lf\n%lf-i%lf", -b/(2*a), sqrt(-delta)/(2*a), -b/(2*a), sqrt(-delta)/(2*a)); 
		}
}
	return 0; 
} 
