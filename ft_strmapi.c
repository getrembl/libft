/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 08:22:12 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/14 14:27:27 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		if (!(ret = (char *)malloc(sizeof(char*) * ft_strlen(s))))
			return (NULL);
		while (s[i] != '\0')
		{
			ret[i] = f(i, s[i]);
			i++;
		}
		return (ret);
	}
	return (NULL);
}
