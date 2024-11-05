/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:09:49 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/04 14:59:19 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	copy;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dstsize > 0)
	{
		if (dstsize > len_src)
			copy = len_src;
		else
			copy = dstsize - 1;
		ft_memcpy(dst, src, copy);
		dst[copy] = '\0';
	}
	return (len_src);
}
