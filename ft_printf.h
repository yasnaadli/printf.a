/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 23:23:48 by yamohamm          #+#    #+#             */
/*   Updated: 2024/12/10 18:21:04 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

int	writechar(char chr);
int	writestr(char *str);
int	writenbr(int nbr);
int	writeunsignednbr(unsigned int nbr);
int	hexconvert(size_t nbr);
int	writeptr(size_t *ptr);
int	writehexlower(unsigned int nbr);
int	writehexupper(unsigned int nbr);
int	vartype(va_list list, char type);
int	ft_printf(const char *s, ...);

#endif