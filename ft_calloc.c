/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:29:12 by jlane             #+#    #+#             */
/*   Updated: 2022/02/25 11:05:10 by jlane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*space;
	size_t	i;

	i = size * count;
	space = malloc(i);
	if (!space)
	{
		return (NULL);
	}
	ft_memset(space, 0, i);
	return (space);
}
