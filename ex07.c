/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:24:33 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 16:31:27 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex07/ft_strncmp.c"

int		main(void)
{
	char *test1[7] = {"asdf", "asde", "asdg", "asdf", "asde", ""};
    char *test2[7] = {"asdf", "asdf", "asdf", "asdf", "asdf", ""};
	int test_n[7] = {4, 4, 4, 3, 3, 0}; 
	int i;
    int result;
    int result_real;

    i = 0;
    while (i < 7)
    {
        result = ft_strncmp(test1[i], test2[i], test_n[i]);
        result_real = strncmp(test1[i], test2[i], test_n[i]);
        printf("%d = %d -> %d\n", result, result_real, result == result_real);
        i++;
    }
    return (0);
}
