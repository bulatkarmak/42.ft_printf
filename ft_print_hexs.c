/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:36:37 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 19:56:23 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_hexs(unsigned long long int num)
{
	int	count;

	count = 0;
	if (num < 10)
		count += ft_print_char(num + '0');
	else if (num < 16)
		count += ft_print_char(num + 87);
	else
	{
		count += ft_print_hexs(num / 16);
		count += ft_print_hexs(num % 16);
	}
	return (count);
}
