/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:11:27 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/13 11:21:02 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char) * ft_long_int(n) + 1)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		ret[i++] = '-';
		n = n * -1;
	}
	while (n >= 10)
	{
		ret[i++] = n % 10 + '0';
		n = n / 10;
	}
	if (n < 10)
		ret[i++] = n + '0';
	ret[i] = '\0';
	ret = ft_revers(ret);
	return (ret);
}
