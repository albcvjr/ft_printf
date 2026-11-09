/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 22:32:35 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/07 23:40:50 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_char_len(int c)
{
	ssize_t	result;
	char	x;

	x = (char)c;
	result = write(1, &x, 1);
	if (result != 1)
		return (-1);
	return (1);
}
