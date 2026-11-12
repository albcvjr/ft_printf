/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 23:53:56 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/12 16:24:48 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_mem(void *ptr)
{
	int			result;
	int			temp;
	uintptr_t	address;

	if (ptr == NULL)
		return (ft_print_str("(nil)"));
	address = (uintptr_t)ptr;
	result = ft_print_str("0x");
	if (result == -1)
		return (-1);
	temp = ft_print_hex(address, 'x');
	if (temp == -1)
		return (-1);
	result += temp;
	return (result);
}
