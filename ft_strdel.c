

#include "libft.h"
#include <stdio.h>

void	ft_strdl(char **as)
{
     int i;

     i = 0;
     *as[i] = NULL;
     while(*as[i] != '\0')
     {
	  free(*as[i]);
	  i++;
     }
}
