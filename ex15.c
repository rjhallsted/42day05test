/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:36:07 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 19:18:15 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex15/ft_str_is_printable.c"

int		main(void)
{
	char non_print[2] = {'\xf0', '\0'};
	char *tests[7] = {"1234", "ASDF","'!@#$^&*()_+-=[]{}:;,./<>?'", non_print, "\x7f", "\n", ""};
	int expected[7] = {1, 1, 1, 0, 0, 0, 1};
	int i;
	int result;

	i = 0;
	while (i < 7)
	{
		result = ft_str_is_printable(tests[i]);
		printf("%s - %d -> %d\n", tests[i], result, result == expected[i]);
		i++;
	}
	return (0);
}
