/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 22:00:17 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/13 15:10:44 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	i = 0;
	if (s && f)
	{
		if (!(ret = (char *)malloc(sizeof(char*) * ft_strlen(s))))
			return (NULL);
		while (s[i] != '\0')
		{
			ret[i] = f(s[i]);
			i++;
		}
	}
	return (ret);
}
