/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaeys <bclaeys@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:24:49 by bclaeys           #+#    #+#             */
/*   Updated: 2024/05/28 15:29:04 by bclaeys          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_format_and_count(char s, va_list ap, size_t *count);
size_t	ftpr_putchar(char c);
size_t	ftpr_puthex(size_t h, char c);
size_t	ftpr_putint(int n);
size_t	ftpr_putstr(char *s);
size_t	ftpr_putptr(size_t p);
size_t	ftpr_putunsdec(unsigned int d);
int		ft_printf(const char *s, ...);

#endif
