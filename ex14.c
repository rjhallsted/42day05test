/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:30:43 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 18:31:53 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex14/ft_str_is_uppercase.c"

int		main(void)
{
	char *tests[5] = {"ABCDE", "ABDCE133", "ABDCaea", "", "a"};
	int expected[5] = {1, 0, 0, 1, 0};
	int i;
	int result;

	i = 0;
	while (i < 5)
	{
		result = ft_str_is_uppercase(tests[i]);
		printf("%s - %d -> %d\n", tests[i], result, result == expected[i]);
		i++;
	}
	return (0);
}
