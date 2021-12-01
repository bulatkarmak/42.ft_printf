/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:14:29 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 20:03:17 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_num(int num)
{
	int	count;

	count = 0;
	if (num == -2147483648)
		count += ft_print_str("-2147483648");
	else if (num < 0)
	{
		count += ft_print_char('-');
		count += ft_print_num(-num);
	}
	else if (num >= 0 && num <= 9)
		count += ft_print_char(num + '0');
	else if (num > 9)
	{
		count += ft_print_num(num / 10);
		count += ft_print_num(num % 10);
	}
	return (count);
}
