/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 11:57:41 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/04 10:33:21 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex03/ft_strcpy.c"
#include <stdio.h>

int		main(void)
{
	char test1[256] = "asdf";
	printf("%s", ft_strcpy(test1, "qwerty\n"));
	printf("%s", ft_strcpy(test1, ""));
	printf("%s\n", ft_strcpy(test1, "hell0\n"));
	return (0);
}
