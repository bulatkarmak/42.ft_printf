/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:14:33 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 19:42:52 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += ft_print_str("(null)");
		return (count);
	}
	while (str[count])
	{
		ft_print_char(str[count]);
		count++;
	}
	return (count);
}
