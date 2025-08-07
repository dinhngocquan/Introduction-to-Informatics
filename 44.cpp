#include <stdio.h>
int main() {
	int a, b, i=1, j, UCLN, BCNN=0;
	scanf("%d %d", &a, &b);
	if (a<=0 || b<=0)
	printf("ERROR");
	else
	{
	while (i<=(a<b?a:b))
	{
	if (a%i==0 && b%i==0)
	UCLN=i;
	i++;
}

	j=a>b?a:b; 
	while (BCNN==0)
	{
	if (j%a==0 && j%b==0) 
	BCNN=j;
	j++;
}
	printf("%d\n%d", UCLN, BCNN);
	 }
	return 0; 
} 
