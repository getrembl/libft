#include "libft.h"

void	ft_striteri(char *s, void(*f)(unsigned int, char *))
{
     unsigned int i;

     i = 0;
     while (strt[i] != '\0')
     {
	  f(&str[i], i);
	  i++;
     }
}
