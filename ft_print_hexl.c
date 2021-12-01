/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:36:26 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 19:43:05 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_hexl(unsigned int num)
{
	int	count;

	count = 0;
	if (num < 10)
		count += ft_print_num(num);
	else if (num < 16)
		count += ft_print_char(num + 55);
	else
	{
		count += ft_print_hexl(num / 16);
		count += ft_print_hexl(num % 16);
	}
	return (count);
}
