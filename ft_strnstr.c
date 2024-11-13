/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:22:51 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/13 14:08:41 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	while (haystack[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s",strnstr(NULL,"iyfoy",5));
}
