/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 19:37:30 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 19:49:29 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	const char s[]="je chelrche le caractere";

	printf("%s\n", ft_strchr(s, 'l'));
	printf("%s\n", strchr(s, 'l'));
	printf("%s\n", ft_strchr(s, '*'));
	printf("%s\n", strchr(s, '*'));
	printf("%s\n", ft_strchr(s, 0));
	printf("%s\n", strchr(s, 0));

	printf("%s\n", ft_strrchr(s, 'l'));
	printf("%s\n", strrchr(s, 'l'));
	printf("%s\nt", ft_strrchr(s, '*'));
	printf("%s\ns", strrchr(s, '*'));
	printf("%s\n", ft_strrchr(s, 0));
	printf("%s\n", strrchr(s, 0));
	return (0);
}
