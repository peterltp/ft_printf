/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:04:15 by ple-              #+#    #+#             */
/*   Updated: 2022/12/20 14:20:55 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_print_char(int c);
int	ft_format(va_list args, const char format);
int	ft_printf(const char *format, ...);
void	ft_put_str(char *str);
int	ft_print_str(char *str);


#endif

