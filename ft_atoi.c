/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhairi <hkhairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:56:24 by hkhairi           #+#    #+#             */
/*   Updated: 2024/11/05 16:19:31 by hkhairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_int(int sign)
{
	if (sign > 0)
		return (-1);
	else
		return (0);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	int					sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result > (unsigned long long)((9223372036854775807
				- (*str - 48)) / 10))
			return (check_int(sign));
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
