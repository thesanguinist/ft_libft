/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:17:14 by jlane             #+#    #+#             */
/*   Updated: 2022/09/23 14:36:22 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchar(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

size_t	ft_strln(char const *str)
{
	size_t	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

char	*ft_subs(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	remainder;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strln(s) - start)
		remainder = 0;
	else
		remainder = ft_strln(s) - start;
	if (remainder < len)
		len = remainder;
	sub = malloc(sizeof(*sub) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		sub [i] = s[i + start];
		i++;
	}
		sub[i] = '\0';
	return (sub);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 |!set)
		return (0);
	while (*s1 && ft_strchar(set, *s1))
		s1++;
	i = ft_strln(s1);
	while (i && ft_strchar(set, s1[i]))
		i--;
	return (ft_subs(s1, 0, i + 1));
}
/*
int main()
{
	const char str[8] = "(class(";
	const char set[2] = "(";

	printf("%s\n", ft_strtrim(str, set));
}*/
