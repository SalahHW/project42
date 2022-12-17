/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 08:39:39 by sbouheni          #+#    #+#             */
/*   Updated: 2022/12/17 02:47:34 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PTRINTF_H
# define FT_PTRINTF_H
# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		evaluate_format(const char c, va_list ap);

#endif
