/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftpr_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaeys <bclaeys@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:37:25 by bclaeys           #+#    #+#             */
/*   Updated: 2024/05/28 15:35:42 by bclaeys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ftpr_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ftpr_putstr("(null)"));
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
