/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 14:36:52 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 15:58:46 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex06/ft_strcmp.c"

int		main(void)
{
	char *test1[7] = {"asdf", "asde", "asdg", "", "A", "", "abc"};
	char *test2[7] = {"asdf", "asdf", "asdf", "", "", "A", "zyx"};
	int i;
	int result;
	int result_real;
	
	i = 0;
	while (i < 7)
	{
		result = ft_strcmp(test1[i], test2[i]);
		result_real = strcmp(test1[i], test2[i]);
		printf("%d = %d -> %d\n", result, result_real, result == result_real);
		i++;
	}
	return (0);
}
