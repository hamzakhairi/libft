/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:56:24 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/01 17:07:38 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_of_number(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				len_nbr;
	char			*res;
	unsigned int	nbr;

	len_nbr = len_of_number(n);
	res = (char *)malloc(sizeof(char) * (len_nbr + 1));
	if (!res)
		return (NULL);
	res[len_nbr] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (len_nbr-- > 0 && nbr != 0)
	{
		res[len_nbr] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}
