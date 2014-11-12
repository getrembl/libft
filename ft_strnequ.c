/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 08:59:50 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/11 09:27:07 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		len_s1;
	int		len_s2;
	int		i;

	i = 0;
	len_s1 = 0;
	len_s2 = 0;
	if (s1 && s2)
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			len_s1 = len_s1 + s1[i];
			len_s2 = len_s2 + s2[i++];
			if (len_s1 != len_s2)
				return (0);
			if (--n == 0)
			{
				if (len_s1 == len_s2)
					return (1);
				return (0);
			}
		}
	if (len_s1 == len_s2)
		return (1);
	return (0);
}
