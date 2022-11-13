/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:56:34 by jlane             #+#    #+#             */
/*   Updated: 2022/01/29 12:12:22 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int main (void)
{
	printf("my function recreated");
	printf("\n%d\n", ft_isalpha(97));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('+'));
	printf("%d\n", ft_isalpha('0'));
	printf("%d\n", ft_isalpha(32));
	printf("%d\n", ft_isalpha(59));
	printf("%d\n", ft_isalpha('='));

	printf("\n\n--------------------------------------------\n\noriginal function");

	printf("\n%d\n", isalpha(97));
	printf("%d\n", isalpha('a'));
	printf("%d\n", isalpha('+'));
	printf("%d\n", isalpha('0'));
	printf("%d\n", isalpha(32));
	printf("%d\n", isalpha(59));
	printf("%d\n", isalpha('='));
}*/
