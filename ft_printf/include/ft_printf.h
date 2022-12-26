/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 08:39:39 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/25 11:44:31 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PTRINTF_H
# define FT_PTRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_print_char(int ap);
int		ft_print_string(char *ap);
int		ft_print_hexadecimal(unsigned long long int ap);
int		ft_print_integer(int ap);
int		ft_print_unsigned_decimal(unsigned int ap);
int		ft_print_lower_hexadecimal(unsigned int ap);
int		ft_print_upper_hexadecimal(unsigned int ap);
int		ft_print_percent();
#endif
