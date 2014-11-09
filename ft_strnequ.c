
#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
     while ((*s1 != '\0' && n != 0 *s1 == *s2) 
	    || (*s2 != '\0' && n != 0 *s1 == *s2))
     {
	  s1++;
	  s2++;
	  n--;
     }
     if (n == 0)
	  return (1);
     else
	  return (0);
}
