/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:17:09 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/12 16:47:49 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	char	*tmp;
	int		i;
	int		j;

	j = 0;
	i = ft_count_char((char *)s, c) + 1;
	if (!s)
		return (NULL);
	if (!(ret = (char **)malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (ft_word_long((char *)s, c, i) == -1)
			return (ret);
		tmp = ft_strnew(ft_word_long((char *)s, c, i));
		if (s[i] != '\0')
			i = ft_copy_tmp((char *)s, i, c, tmp);
		ret[j] = ft_strnew(ft_strlen(tmp));
		ft_strcpy(ret[j++], tmp);
	}
	return (ret);
}
