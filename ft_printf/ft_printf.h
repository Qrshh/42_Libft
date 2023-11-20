/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:43:45 by abesneux          #+#    #+#             */
/*   Updated: 2023/10/30 18:46:37 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_un(unsigned int n);
int	ft_nbrbase(unsigned long nbr, char *base, bool ptr);
int	ft_format(va_list args, const char format);
int	ft_printf(const char *format, ...);

#endif