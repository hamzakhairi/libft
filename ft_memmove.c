/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:57:55 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/09 16:01:30 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	if (ptr_dst < ptr_src)
		ft_memcpy(ptr_dst, ptr_src, len);
	else
	{
		ptr_dst += len;
		ptr_src += len;
		while (len--)
			*(--ptr_dst) = *(--ptr_src);
	}
	return (dst);
}
