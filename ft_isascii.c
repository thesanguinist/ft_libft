/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:28:04 by jlane             #+#    #+#             */
/*   Updated: 2022/09/23 14:07:21 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	int c;
	c = 123;
	printf("\nMY: %d", ft_isascii(c));
	printf("\nOG: %d", isascii(c));
	printf("\n---------------------------------------\n");
	c = 530;
	printf("\nMY: %d", ft_isascii(c));
	printf("\nOG: %d", isascii(c));
}*/
