/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:11:08 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 17:19:38 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex11/ft_str_is_alpha.c"

int		main(void)
{
	int result;

	result = ft_str_is_alpha("asdf");
	printf("%s - %d -> %d\n", "asdf", result, result == 1);

	result = ft_str_is_alpha("QWERTY");
	printf("%s - %d -> %d\n", "QWERTY", result, result == 1);
	
	result = ft_str_is_alpha("asdf1234");
	printf("%s - %d -> %d\n", "asdf1234", result, result == 0);

	result = ft_str_is_alpha("999");
	printf("%s - %d -> %d\n", "999", result, result == 0);

	result = ft_str_is_alpha("");
	printf("%s - %d -> %d\n", "", result, 1);
	
	return (0);
}
