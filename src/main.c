/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 23:54:24 by msantos-          #+#    #+#             */
/*   Updated: 2020/10/24 12:48:47 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "printf.h"

int		main(void)
{
	char	c = 'c';
	int 	x;
	char 	*a = "hola";
	int   	j = 696969;
	int		*p = &j;
	ft_printf("\n\n****** CHAR ******\n");
	printf("CARACTERES: %d \n", ft_printf("mi char 9c: -%9c-\n", c));
	printf("CARACTERES: %d \n\n", printf("char 9c :   -%9c-\n", c));
	printf("CARACTERES: %d \n", ft_printf("mi char -5c: -%-5c-\n", c));
	printf("CARACTERES: %d \n\n", printf("char -5c  :  -%-5c-\n", c));
	printf("CARACTERES: %d \n", ft_printf("mi char 4c: -%4c-\n", c));
	printf("CARACTERES: %d \n\n", printf("char 4c :   -%4c-\n", c));
	printf("CARACTERES: %d \n", ft_printf("mi char *c10: -%*c-\n", 10, c));
	printf("CARACTERES: %d \n\n", printf("char  *c10:   -%*c-\n", 10, c));
	printf("CARACTERES: %d \n", ft_printf("mi har *c-10: -%*c-\n", -10, c));
	printf("CARACTERES: %d \n\n", printf("char  *c-10:   -%*c-\n", -10, c));
	printf("CARACTERES: %d \n", ft_printf("mi char *c-5: -%*c-\n", -5, c));
	printf("CARACTERES: %d \n\n", printf("char  *c-5:   -%*c-\n", -5, c));
	printf("CARACTERES: %d \n", ft_printf("mi char *c-20: -%*c-\n", -20, c));
	printf("CARACTERES: %d \n\n", printf("char  *c-20:   -%*c-\n", -20, c));
	ft_printf("\n\n****** STRINGS ******\n");
	printf("CARACTERES: %d \n", ft_printf("mi printf   15s: %*.*s\n",11, 1, a));
	printf("CARACTERES: %d \n\n", printf("oficial con 15s: %*.*s\n",11, 1, a));
	printf("CARACTERES: %d \n", ft_printf("mi printf   15s: %9.3s\n", a));
	printf("CARACTERES: %d \n\n", printf("oficial con 15s: %9.3s\n", a));
	printf("CARACTERES: %d \n", ft_printf("%s\n", "testing testing"));
	printf("CARACTERES: %d \n\n", printf("%s\n", "testing testing"));
	printf("CARACTERES: %d \n", ft_printf("%s%s", "hello", "world"));
	printf("CARACTERES: %d \n\n", printf("%s%s", "hello", "world"));
	printf("CARACTERES: %d \n", ft_printf("..%s stuff %s", "a", "b"));
	printf("CARACTERES: %d \n\n", printf("..%s stuff %s", "a", "b"));
	printf("CARACTERES: %d \n", ft_printf("this %s is %s", "hello", ""));
	printf("CARACTERES: %d \n\n", printf("this %s is %s", "hello", ""));
	printf("CARACTERES: %d \n", ft_printf("this %s is %s", "", "hello"));
	printf("CARACTERES: %d \n\n", printf("this %s is %s", "", "hello"));
	printf("CARACTERES: %d \n", ft_printf("%s%s%s", "1", "2", "3's a charm"));
	printf("CARACTERES: %d \n\n", printf("%s%s%s", "1", "2", "3's a charm"));
	printf("CARACTERES: %d \n", ft_printf("%32s", "abc"));
	printf("CARACTERES: %d \n\n", printf("%32s", "abc"));
	printf("CARACTERES: %d \n", ft_printf("hello, %s.", NULL));
	printf("CARACTERES: %d \n\n", printf("hello, %s.", NULL));
	printf("CARACTERES: %d \n", ft_printf("%32s", NULL));
	printf("CARACTERES: %d \n\n", printf("%32s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%-32s", NULL));
	printf("CARACTERES: %d \n\n", printf("%-32s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%-16s", NULL));
	printf("CARACTERES: %d \n\n", printf("%-16s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%.03s", NULL));
	printf("CARACTERES: %d \n\n", printf("%.03s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%3.s", NULL));
	printf("CARACTERES: %d \n\n", printf("%3.s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%10.s", NULL));
	printf("CARACTERES: %d \n\n", printf("%10.s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%-3.s", NULL));
	printf("CARACTERES: %d \n\n", printf("%-3.s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%-8.s", NULL));
	printf("CARACTERES: %d \n\n", printf("%-8.s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%-3.1s", NULL));
	printf("CARACTERES: %d \n\n", printf("%-3.1s", NULL));
	printf("CARACTERES: %d \n", ft_printf("%7.5s", "123456789"));
	printf("CARACTERES: %d \n\n", printf("%7.5s", "123456789"));
	printf("CARACTERES: %d \n", ft_printf("%0-0s", "hi low"));
	printf("CARACTERES: %d \n\n", printf("%0-0s", "hi low"));
	printf("CARACTERES: %d \n", ft_printf("%00-s", "hi low"));
	printf("CARACTERES: %d \n\n", printf("%00-s", "hi low"));
	printf("CARACTERES: %d \n", ft_printf("%09s", "hi low"));
	printf("CARACTERES: %d \n\n", printf("%09s", "hi low"));
	ft_printf("\n\n****** INT ******\n");
	printf("|CARACTERES: %d \n\n", printf("%-7d", -14));
	printf("|CARACTERES: %d \n\n", ft_printf("%-7d", -14));
	printf("|CARACTERES: %d \n", ft_printf("MI int con 9.7: %9.7d\n", j));
	printf("|CARACTERES: %d \n\n", printf("int con 9.7   : %9.7d\n", j));
	printf("|CARACTERES: %d \n", ft_printf("MI int con 7.9: %7.9d\n", j));
	printf("|CARACTERES: %d \n\n", printf("int con 7.9   : %7.9d\n", j));
	printf("|CARACTERES: %d \n", ft_printf("%7d", 33));
	printf("|CARACTERES: %d \n\n", printf("%7d", 33));
	printf("|CARACTERES: %d \n", ft_printf("%7d", -14));
	printf("|CARACTERES: %d \n\n", printf("%7d", -14));
	printf("|CARACTERES: %d \n", ft_printf("%3d", 0));
	printf("|CARACTERES: %d \n\n", printf("%3d", 0));
	printf("|CARACTERES: %d \n", ft_printf("%-7d", 33));
	printf("|CARACTERES: %d \n\n", printf("%-7d", 33));
	printf("|CARACTERES: %d \n", ft_printf("%-7d", -14));
	printf("|CARACTERES: %d \n\n", printf("%-7d", -14));
	printf("|CARACTERES: %d \n", ft_printf("%-3d", 0));
	printf("|CARACTERES: %d \n\n", printf("%-3d", 0));
	printf("|CARACTERES: %d \n", ft_printf("%.5d", 2));
	printf("|CARACTERES: %d \n\n", printf("%.5d", 2));
	printf("|CARACTERES: %d \n", ft_printf("%.6d", -3));
	printf("|CARACTERES: %d \n\n", printf("%.6d", -3));
	printf("|CARACTERES: %d \n", ft_printf("%.3d", 0));
	printf("|CARACTERES: %d \n\n", printf("%.3d", 0));
	printf("|CARACTERES: %d \n", ft_printf("%05d", 43));
	printf("|CARACTERES: %d \n\n", printf("%05d", 43));
	printf("|CARACTERES: %d \n", ft_printf("%07d", -54));
	printf("|CARACTERES: %d \n\n", printf("%07d", -54));
	printf("|CARACTERES: %d \n", ft_printf("%03d", 0));
	printf("|CARACTERES: %d \n\n", printf("%03d", 0));
	printf("|CARACTERES: %d \n", ft_printf("%3.7d", -2375));
	printf("|CARACTERES: %d \n\n", printf("%3.7d", -2375));
	printf("|CARACTERES: %d \n", ft_printf("%0-8.5d", 34));
	printf("|CARACTERES: %d \n\n", printf("%0-8.5d", 34));
	printf("|CARACTERES: %d \n", ft_printf("%-10.5d", -216));
	printf("|CARACTERES: %d \n\n", printf("%-10.5d", -216));
	printf("|CARACTERES: %d \n", ft_printf("%10.5d", -216));
	printf("|CARACTERES: %d \n\n", printf("%10.5d", -216));
	printf("|CARACTERES: %d \n", ft_printf("%-8.5d", 34));
	printf("|CARACTERES: %d \n\n", printf("%-8.5d", 34));
	printf("|CARACTERES: %d \n\n", printf("%d", 0));
	printf("|CARACTERES: %d \n\n", ft_printf("%d", 0));
	printf("|CARACTERES: %d \n\n", printf("%07d", -54));
	printf("|CARACTERES: %d \n\n", ft_printf("%07d", -54));
	printf("|CARACTERES: %d \n\n", printf("%0-8.5d", 34));
	printf("|CARACTERES: %d \n\n", ft_printf("%0-8.5d", 34));
	printf("|CARACTERES: %d \n\n", printf("%0-10.5d", -216));
	printf("|CARACTERES: %d \n\n", ft_printf("%0-10.5d", -216));
	printf("|CARACTERES: %d \n\n", printf("%0-8.5d", 0));
	printf("|CARACTERES: %d \n\n", ft_printf("%0-8.5d", 0));
	printf("\n\n");
	printf("|CARACTERES: %d \n", ft_printf("%.0d", 0));
	printf("|CARACTERES: %d \n\n", printf("%.0d", 0));
	printf("|CARACTERES: %d \n", printf("%.d", 0));
	printf("|CARACTERES: %d \n\n", ft_printf("%.d", 0));
	printf("|CARACTERES: %d \n", printf("%5.0d", 0));
	printf("|CARACTERES: %d \n\n", ft_printf("%5.0d", 0));
	printf("|CARACTERES: %d \n", printf("%5.d", 0));
	printf("|CARACTERES: %d \n\n", ft_printf("%5.d", 0));
	printf("|CARACTERES: %d \n", printf("%-5.0d", 0));
	printf("|CARACTERES: %d \n\n", ft_printf("%-5.0d", 0));
	printf("|CARACTERES: %d \n", printf("%-5.d", 0));
	printf("|CARACTERES: %d \n\n", ft_printf("%-5.d", 0));

	return (0);
}
