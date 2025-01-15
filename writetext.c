/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writetext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:56:02 by yamohamm          #+#    #+#             */
/*   Updated: 2024/12/10 17:58:45 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	writechar(char chr)
{
	write(1, &chr, 1);
	return (1);
}

int	writestr(char *str)
{
	int	cnt;

	cnt = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	else
	{
		while (str[cnt] != '\0')
		{
			writechar(str[cnt]);
			cnt++;
		}
		return (cnt);
	}
}

int	writenbr(int nbr)
{
	int	cnt;

	cnt = 0;
	if (nbr == -2147483648)
	{
		cnt += writechar('-');
		cnt += writechar('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		cnt += writechar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		cnt += writenbr(nbr / 10);
	cnt += writechar(nbr % 10 + '0');
	return (cnt);
}

int	writeunsignednbr(unsigned int nbr)
{
	int		cnt;

	cnt = 0;
	if (nbr == 4294967295)
	{
		cnt += write(1, "4", 1);
		nbr = 294967295;
	}
	if (nbr < 10)
		cnt += writechar('0' + nbr);
	if (nbr > 9)
	{
		cnt += writeunsignednbr(nbr / 10);
		cnt += writeunsignednbr(nbr % 10);
	}
	return (cnt);
}
