#include <stdio.h>
void myswapint ( int *p1 , int *p2);
int main (void)
{
	int n1;
	int n2;
	n1 = 13;
	n2 = 27;
	myswapint(&n1,&n2);
	printf("%d %d\n",n1,n2);

	return(0);
}
