#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
     int i;

     i = 0;
     while (str[i] != '\0')
     {
	  f(&s[i]);
	  i++;
     }
}
