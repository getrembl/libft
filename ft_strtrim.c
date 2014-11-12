/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 10:03:04 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/11 11:36:47 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*r;
	int		i;
	char	*ret2;
	int		d;

	i = 0;
	d = 0;
	if (s == NULL)
		return (NULL);
	if (!(r = (char *)malloc(sizeof(char*) * ft_strlen(s))))
		return (NULL);
	while ((s[i] == ' ') || (s[i] == ',') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	while (s[i] != '\0')
		r[d++] = s[i++];
	if (!(ret2 = (char *)malloc(sizeof(char*) * ft_strlen(s))))
		return (NULL);
	i = ft_strlen(r) - 1;
	d = 0;
	while ((r[i] == ' ') || (r[i] == ',') || (r[i] == '\n') || (r[i] == '\t'))
		i--;
	while (d <= i)
		ret2[d++] = *r++;
	ret2[d] = '\0';
	return (ret2);
}
