
#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
     char	*ret;
     int	i;
     int	d;

     d = 0;
     i = 0;
     ret = (char *)malloc(sizeof(char*) * ft_strlen(s));
     if (ret == NULL)
	  return (NULL);
     while (s[i] != '\0')
     {
	  while ((s[i] == ' ') || (s[i] == ',') || (s[i] == '\n')
		 || (s[i] == '\t'))
	       i++;
	  while ((s[i] != ' ') || (s[i] != ',') || (s[i] != '\n')
		 || (s[i] = '\t'))
	  {	   
	       ret[d] = s[i];
	       i++;
	       d++;
	  }
	  while ((s[i] == ' ') || (s[i] == ',') || (s[i] == '\n')
		 || (s[i] == '\t'))
	       ret[d] = '\0';
     }
     return (ret);
}
