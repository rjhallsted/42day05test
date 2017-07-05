/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:03:25 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 18:11:15 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex12/ft_str_is_numeric.c"

int		main(void)
{
	char *tests[5] = {"123456", "asdf1234", "0", "", "12345adsfe"};
	int expected[5] = {1, 0, 1, 1, 0};
	int i;
	int result;

	i = 0;
	while (i < 5)
	{
		result = ft_str_is_numeric(tests[i]);
		printf("%s - %d -> %d\n", tests[i], result, result == expected[i]);
		i++;
	}
	return (0);
}
