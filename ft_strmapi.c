/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 08:22:12 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/13 15:10:53 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char*) * ft_strlen(s))))
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			ret[i] = f(i, s[i]);
			i++;
		}
	}
	return (ret);
}
