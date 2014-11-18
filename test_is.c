/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 18:22:40 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 18:40:25 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	int c;

	c = '!';

	while (c < '~')
	{
		printf("isalnum = %d\n", ft_isalnum(c));
		printf("isalnum = %d\n", ft_isalnum(0));
		printf("alnum = %d\n", isalnum(c));
		printf("alnum = %d\n", isalnum(0));
		printf("isalpha = %d\n", ft_isalpha(c));
		printf("alpha = %d\n", isalpha(c));
		printf("isascii = %d\n", ft_isascii(c));
		printf("ascii = %d\n", isascii(c));
		printf("isdigit = %d\n", ft_isdigit(c));
		printf("digit = %d\n", isdigit(c));
		printf("isprint = %d\n", ft_isprint(c));
		printf("print = %d\n", isprint(c));
		c++;
	}
	return (0);
}
