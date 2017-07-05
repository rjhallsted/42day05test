/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:40:19 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 10:56:52 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "../ex01/ft_putnbr.c"
#include <stdio.h>

int		main(void)
{
	printf("123456\n");
	ft_putnbr(123456);

	printf("\n\n-987654321\n");
	ft_putnbr(-987654321);

	printf("\n\n0\n");
	ft_putnbr(0);

	printf("\n\n2147483647\n");
	ft_putnbr(2147483647);

	printf("\n\n-2147483648\n");
	ft_putnbr(-2147483648);

	return (0);
}
