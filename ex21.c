/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex21.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:43:38 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/04 16:27:30 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex21/ft_atoi_base.c"
#include "ft_putchar.c"

int		main(void)
{
	printf("%d\n", ft_atoi_base("15", "0123456789"));
	printf("%d\n\n", 15);

	printf("%d\n", ft_atoi_base("3f", "0123456789abcdef"));
	printf("%d\n\n", 63);

	printf("%d\n", ft_atoi_base("a", "0a"));
	printf("%d\n\n", 1);

	printf("%d\n", ft_atoi_base("-15", "0123456789"));
	printf("%d\n\n", -15);

	printf("%d\n", ft_atoi_base("-111", "01"));
	printf("%d\n\n", -7);

	printf("%d\n", ft_atoi_base("a", "0"));
	printf("%d\n\n", 0);

	printf("%d\n", ft_atoi_base("1", "012341234"));
	printf("%d\n\n", 0);

	printf("%d\n", ft_atoi_base("1", "01234+"));
	printf("%d\n\n", 0);

	printf("%d\n", ft_atoi_base("5", "01234"));
	printf("%d\n\n", 0);

	printf("%d\n", ft_atoi_base("", "01234"));
	printf("%d\n\n", 0);

	printf("%d\n", ft_atoi_base("7fffffff", "0123456789abcdef"));
	printf("%d\n\n", 2147483647);

	printf("%d\n", ft_atoi_base("-80000000", "0123456789abcdef"));
	printf("%s\n\n", "-2147483648");

	return (0);
}
