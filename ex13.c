/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex13.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:22:25 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 18:23:26 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex13/ft_str_is_lowercase.c"

int		main(void)
{
	char *tests[5] = {"abcde", "asdf1234", "adeAC", "", "A"};
	int expected[5] = {1, 0, 0, 1, 0};
	int i;
	int result;

	i = 0;
	while (i < 5)
	{
		result = ft_str_is_lowercase(tests[i]);
		printf("%s - %d -> %d\n", tests[i], result, result == expected[i]);
		i++;
	}
	return (0);
}
