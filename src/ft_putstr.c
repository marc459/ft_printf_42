/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:08:38 by msantos-          #+#    #+#             */
/*   Updated: 2020/02/23 23:22:02 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putstr(const char *s, t_printf *f)
{
	size_t i;

	i = 0;
	if (s == NULL)
		return ;
	while (i < ft_strlen(s))
	{
		write(1, &s[i], 1);
		f->len++;
		i++;
	}
}
