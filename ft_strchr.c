/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:27:49 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/04 15:20:50 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	altc;
	char	*alts;
	int		i;

	i = 0;
	alts = (char *)s;
	altc = c;
	while (alts[i] != altc)
	{
		if (alts[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)alts + i);
}
