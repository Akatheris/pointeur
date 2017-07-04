void mysuperswap(void **p1 , void **p2);
#include <stdio.h>
int main(void)
{
	int n1;
	int n2;
	char c1;
	char c2;
	int *pn1;
	int *pn2;
	char *pc1;
	char *pc2;

	n1 = 12;
	n2 = 15;
	c1 = 'a';
	c2 = 'e';
	pn1 = &n1;
	pn2 = &n2;
	pc1 = &c1;
	pc2 = &c2;

	mysuperswap(&pn1,&pn2);
	mysuperswap(&pc1,&pc2);


	printf("%d %d %c %c\n",*pn1,*pn2,*pc1,*pc2);

	return(0);
}
