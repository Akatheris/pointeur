#include <stdio.h>
void mystrreplacechar ( char *str[],const char c1,const char c2);
int main (void)
{
	char c1;
	char c2;
	char *str=strdup("ef");
	c1 = 'f';
	c2='n';

	mystrreplacechar(&str,c1,c2);

	printf("%s\n",str);


	return(0);


}
