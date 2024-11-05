/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:59:18 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/04 21:21:58 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	count_s1;
	char	*res;

	count_s1 = ft_strlen(s1) + 1;
	res = (char *)ft_calloc(count_s1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1, count_s1);
	return (res);
}
