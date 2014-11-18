/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:43:09 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 17:37:21 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					nb;
	int					i;
	int					neg;

	i = 0;
	nb = 0;
	if (str)
	{
		while (str[i] >= 1 && str[i] <= 32)
			i++;
		if (ft_strlen(str) > 12)
			return (0);
		if ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				neg = -1;
			else
				neg = 1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i++] - '0');
			nb = nb * neg;
	}
	return (nb);
}
