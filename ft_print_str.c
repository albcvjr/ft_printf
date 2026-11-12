/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acuevas <acuevas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:05:15 by acuevas           #+#    #+#             */
/*   Updated: 2026/11/12 16:24:48 by acuevas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;
	int	temp;

	i = 0;
	if (str == NULL)
	{
		return (ft_print_str("(null)"));
	}
	while (str[i])
	{
		temp = ft_print_char_len(str[i]);
		if (temp == -1)
			return (-1);
		i++;
	}
	return (i);
}
