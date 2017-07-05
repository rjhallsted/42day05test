/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex22.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:31:33 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/04 18:01:22 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putchar.c"
#include "../ex22/ft_putstr_non_printable.c"

int		main(void)
{
	ft_putstr_non_printable("asdf\x7f\x1fhi\x01\xfflol");
	printf("\n%s\n", "asdf\\7f\\1fhi\\01\\fflol");

	char str[2] = {'\xff', 0};
	ft_putstr_non_printable(str);
	return (0);
}
