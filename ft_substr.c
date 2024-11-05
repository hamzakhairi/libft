/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:41:36 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/04 21:52:27 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*res;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		res = (char *)malloc(1);
		if (res == NULL)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (len > s_len - start)
		len = s_len - start;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		res[i++] = s[start++];
	}
	res[i] = '\0';
	return (res);
}
