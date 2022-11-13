/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:34:37 by jlane             #+#    #+#             */
/*   Updated: 2022/09/23 14:07:50 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int main (void)
{
	printf("my function recreated");
	printf("\n%d\n", ft_isdigit(97));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit(32));
	printf("%d\n", ft_isdigit(59));
	printf("%d\n", ft_isdigit('='));

	printf("\n\n--------------------------------------------\n\noriginal function");

	printf("\n%d\n", isdigit(97));
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit('0'));
	printf("%d\n", isdigit(32));
	printf("%d\n", isdigit(59));
	printf("%d\n", isdigit('='));
}*/
