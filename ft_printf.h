/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjustice <bjustice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:14:35 by bjustice          #+#    #+#             */
/*   Updated: 2021/11/30 19:56:54 by bjustice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include	<stdio.h>
# include	<stdarg.h>
# include	<unistd.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_num(int num);
int	ft_print_unum(unsigned int unum);
int	ft_print_hexs(unsigned long long int num);
int	ft_print_hexl(unsigned int num);
int	ft_print_pntr(unsigned long long int pntr);

#endif