/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 08:22:12 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/12 13:35:51 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	ret = (char *)s;
	ret = (char *)malloc(sizeof(char*) * i);
	if (ret == NULL)
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			ret = (char *)malloc(sizeof(char*) * i);
			ret[i] = f(i, s[i]);
			i++;
		}
	}
	return (ret);
}
