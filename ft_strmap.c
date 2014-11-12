/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 22:00:17 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/10 22:10:27 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*ret;
	int		i;

	ret = (char *)s;
	i = 0;
	if (s && f)
	{
		ret = (char *)malloc(sizeof(char*) * i + 1);
		f(ret[i]);
		i++;
	}
	return (ret);
}
