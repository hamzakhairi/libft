/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:27:58 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/04 16:09:17 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	size_t				i;

	ptr_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return ((void *)(ptr_s + i));
		i++;
	}
	return (NULL);
}
