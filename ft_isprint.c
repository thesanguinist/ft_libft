/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:10:01 by jlane             #+#    #+#             */
/*   Updated: 2022/09/23 14:08:14 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}	
/*
int	main(void)
{
	int a;
	a = 12;
	printf("\nsubject:%d", a);
	printf("\nmy: %d", ft_isprint(a));
	printf("\nOG: %d", isprint(a));
	printf("------------------------");
	a = '/';
	printf("\nsubject:%d", a);
	printf("\nmy: %d", ft_isprint(a));
	printf("\nOG: %d", isprint(a));
	printf("------------------------");
	a = 127;
	printf("\nsubject:%d", a);
	printf("\nmy: %d", ft_isprint(a));
	printf("\nOG: %d", isprint(a));
	printf("------------------------");
	a = 64;
	printf("\nsubject:%d", a);
	printf("\nmy: %d", ft_isprint(a));
	printf("\nOG: %d", isprint(a));
	printf("------------------------");
}*/
