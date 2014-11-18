/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_clr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 19:59:02 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/18 20:03:33 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	char s[]="abcde";
	char s1[]="";

	printf("%s\n", s);
	ft_strclr(s);
	printf("%s\n", s);
	printf("%s\n", s1);
	ft_strclr(s1);
	printf("%s\n", s1);
	return (0);
}
