/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:52:26 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 12:54:35 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_strncpy.c"
#include <stdio.h>

int		main(void)
{
	char test1[256] = "asdf";

	printf("%s\n", ft_strncpy(test1, "uiop", 5));
	printf("%s\n", ft_strncpy(test1, "qwerty", 4));
	printf("%s\n", ft_strncpy(test1, "z", 1));
	return (0);
}
