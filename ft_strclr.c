
#include "libft.h"

void	ft_strclr(char *s)
{
     int i;

     while (s[i] != '\0')
     {
	  s[i] = '\0';
	  i++;
     }
}
