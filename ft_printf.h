/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbussier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:57:36 by gbussier          #+#    #+#             */
/*   Updated: 2023/01/13 12:50:07 by gbussier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_put_u(unsigned int nb);
int	ft_put_x(unsigned int nb, char *base);
int	ft_put_xmaj(unsigned int nb, char *base);
int	ft_put_char(char c);
int	ft_put_str(char *str);
int	ft_put_nbr(int nb);
int	ft_put_ptr(void *ptr, char *base);

#endif
