/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pntr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:17:12 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 19:47:17 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_pntr(unsigned long long int pntr)
{
	int	count;

	count = ft_print_str("0x");
	count += ft_print_hexs(pntr);
	return (count);
}
