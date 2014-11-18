/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 20:04:24 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 20:08:07 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	const char a[]="abcde";
	const char b[]="abcde";
	const char a1[]="abcde";
	const char b1[]="abkdjdcde";

	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
	printf("%d\n", ft_strcmp(a1, b1));
	printf("%d\n", strcmp(a1, b1));
	return (0);
}
