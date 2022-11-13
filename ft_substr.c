/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:50:29 by jlane             #+#    #+#             */
/*   Updated: 2022/09/23 14:37:34 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	remainder;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		remainder = 0;
	else
		remainder = ft_strlen(s) - start;
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
