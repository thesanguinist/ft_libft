/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:45:20 by jlane             #+#    #+#             */
/*   Updated: 2022/09/23 14:37:57 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c -= 'A' - 'a';
	return (c);
}
/*
int main()
{
	char	c;
	char	d;

	c = 65;
	d = 90;

	printf("OG %c\n", tolower(c));
	printf("OG %c\n", tolower(d));
	printf("OG %c\n", ft_tolower(c));
	printf("OG %c\n", ft_tolower(d));
}*/
