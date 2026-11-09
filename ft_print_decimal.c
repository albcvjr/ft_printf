/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 20:53:21 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/09 05:31:15 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_decimal(long n)
{
	char	digit;
	int		count;
	int		result;

	count = 0;
	result = 0;
	if (n >= 10)
	{
		count = ft_print_decimal(n / 10);
		if (count == -1)
			return (count);
		result += count;
	}
	digit = n % 10 + '0';
	count = ft_print_char_len(digit);
	if (count == -1)
		return (count);
	result += count;
	return (result);
}
