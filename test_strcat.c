/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 19:21:41 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 19:36:14 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char s2[]="1234";
	char s3[]="";
	char s1[10];
	char s4[]="abcde";
	char s5[]="abcde";

	printf("%s\n", ft_strcat(s4, s2));
	printf("%s\n", strcat(NULL, s5));
	printf("%s\n", ft_strcat(s4, s2));
	printf("%s",ft_strcat(s3, s2));
	return (0);
}
