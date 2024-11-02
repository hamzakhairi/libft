/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:15:46 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/01 17:02:06 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	get_nber_split(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	*get_next_word(char const *s, char c, int *index)
{
	int	start;
	int	length;

	start = *index;
	length = 0;
	while (s[*index] && s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
	{
		(*index)++;
		length++;
	}
	return (ft_substr(s, start, length));
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		num_words;
	int		i;
	int		index;

	i = 0;
	index = 0;
	num_words = get_nber_split(s, c);
	if (!s)
		return (NULL);
	res = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < num_words)
	{
		res[i] = get_next_word(s, c, &index);
		if (!res[i])
		{
			while (i-- > 0)
				free(res[i]);
			free(res);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}

// int main()
// {
//     char *hamza = "hello,world,split,test";
//     char c = ',';
//     char **res = ft_split(hamza, c);

//     for (int i = 0; res[i]; i++)
//     {
//         printf("%s\n", res[i]);
//         free(res[i]);
//     }
//     free(res);

//     return 0;
// }
