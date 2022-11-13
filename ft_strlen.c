/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:37:20 by jlane             #+#    #+#             */
/*   Updated: 2022/09/23 14:30:32 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(char const *str)
{
	size_t	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}
/*
int main(void)
{
	printf("\nMY: %lu", ft_strlen("hello world"));
	printf("\nOG: %lu", strlen("hello world"));
}*/
