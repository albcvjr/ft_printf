/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 20:37:01 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/08 23:26:45 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hex(uintptr_t n, char specifier)
{
	int			count;
	int			result;
	int			hex_digit;
	const char	*hex;

	count = 0;
	if (specifier == 'X')
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	hex_digit = n % 16;
	if (n >= 16)
		count = ft_print_hex(n / 16, specifier);
	if (count == -1)
		return (-1);
	result = ft_print_char_len(hex[hex_digit]);
	if (result == -1)
		return (result);
	result += count;
	return (result);
}
