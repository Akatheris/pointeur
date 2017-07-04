void addone (int *n);
#include <stdio.h>
int main (void)
{
	
	int n;
	n = 0;
	addone(&n); 
	printf("%d\n",n);

	return(0);
}
