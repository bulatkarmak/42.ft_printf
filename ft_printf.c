/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:14:27 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 20:03:09 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_params(const char *str, int count, va_list ap)
{
	if (*str == 'c' && str)
		count += ft_print_char(va_arg(ap, int));
	else if (*str == 's' && str)
		count += ft_print_str(va_arg(ap, char *));
	else if ((*str == 'd' || *str == 'i') && str)
		count += ft_print_num(va_arg(ap, int));
	else if (*str == 'u' && str)
		count += ft_print_unum(va_arg(ap, unsigned int));
	else if (*str == 'x' && str)
		count += ft_print_hexs(va_arg(ap, unsigned int));
	else if (*str == 'X' && str)
		count += ft_print_hexl(va_arg(ap, unsigned int));
	else if (*str == 'p' && str)
		count += ft_print_pntr(va_arg(ap, unsigned long long int));
	else
		count += ft_print_char(*str);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && str)
		{
			str++;
			count = ft_params(str, count, ap);
		}
		else
			count += ft_print_char(*str);
		str++;
	}
	va_end(ap);
	return (count);
}
