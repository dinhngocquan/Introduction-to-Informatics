#include <stdio.h>
int main (){
	int i, ngt=1, n; 
	scanf("%d", &n);
	if (0<=n && n<8) 
	{
	for (i=1; i<=n; i++) 
	 	{
	 	ngt=ngt*i;
	}
	printf("%d", ngt);  
}
else 
printf("ERROR"); 
	 return 0; 
} 
