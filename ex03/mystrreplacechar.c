#include <unistd.h>
void mystrreplacechar (char *str[],const char c1,const char c2)
{
	int i ;
	char n ;
	char f ;
	f = c1 ;
	n = c2 ;
	i = 0;
	while ((*str)[i] != '\0')
	{
		if ((*str)[i] == f)
		{
			(*str)[i] = n;
			
		}
		i++;
			
	}
	 
	
}
