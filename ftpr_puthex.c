
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftpr_puthex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaeys <bclaeys@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:40:23 by bclaeys           #+#    #+#             */
/*   Updated: 2024/05/28 14:49:45 by bclaeys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ftpr_puthex(size_t h, char c)
{
	int		count;
	char	*symbols;
	char	*symbols_up;

	count = 0;
	symbols = "0123456789abcdef";
	symbols_up = "0123456789ABCDEF";
	// if (h < 0)
	//{
	//	ftpr_putchar('-');
	//	return (ftpr_puthex(-h, c) + 1);
	//}
	if (h >= 16)
	{
		count += ftpr_puthex(h / 16, c);
		h = h % 16;
	}
	if (c == 'x')
		count += ftpr_putchar(symbols[h]);
	if (c == 'X')
		count += ftpr_putchar(symbols_up[h]);
	return (count);
}
