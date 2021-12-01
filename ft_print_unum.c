/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:36:33 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 19:42:50 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_unum(unsigned int unum)
{
	int	count;

	count = 0;
	if (unum <= 9)
		count += ft_print_char(unum + '0');
	else
	{
		count += ft_print_unum(unum / 10);
		count += ft_print_unum(unum % 10);
	}
	return (count);
}
