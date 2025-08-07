#include <stdio.h>
int main() {
	int i, n, count=0;
	scanf("%d", &n);
	for (i=2; i<=(n/2); i++)
	{
	if (n%i==0)
	 count+=1; 
}
if (n==1 || (n!=2 && count!=0) || n<=0)
printf("Khong phai la so nguyen to");
else 
printf("La so nguyen to"); 
	return 0; 
} 
