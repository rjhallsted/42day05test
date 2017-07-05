/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex20.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 00:25:36 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/04 00:57:55 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex20/ft_putnbr_base.c"
#include "ft_putchar.c"

int		main(void)
{
	ft_putnbr_base(16, "0123456789");
	printf("\n%s\n\n", "16");

	ft_putnbr_base(40, "0123456789abcdef");
	printf("\n%s\n\n", "28");

	ft_putnbr_base(31, "0123456789abcdef");
	printf("\n%s\n\n", "1f");

	ft_putnbr_base(15, "01");
	printf("\n%s\n\n", "1111");

	ft_putnbr_base(-15, "0123456789");
	printf("\n%s\n\n", "-15");

	ft_putnbr_base(-16, "01");
	printf("\n%s\n\n", "-10000");

	ft_putnbr_base(2147483647, "0123456789abcdef");
	printf("\n%s\n\n", "7fffffff");

	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\n%s\n\n", "-80000000");

	return (0);
}
