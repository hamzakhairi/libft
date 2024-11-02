/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:34:16 by hkhairi           #+#    #+#             */
/*   Updated: 2024/10/31 16:39:37 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	copy;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	else
	{
		if (dstsize - len_dst - 1 > len_src)
			copy = len_src;
		else
			copy = dstsize - len_dst - 1;
		ft_memcpy(dst + len_dst, src, copy);
		dst[len_dst + copy] = '\0';
	}
	return (len_src + len_dst);
}
