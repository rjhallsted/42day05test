/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 10:58:32 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 15:52:11 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex02/ft_atoi.c"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char *tests[8] = {"0", "15", "-25", "12345", "987654321", "-34567", "2147483647", "-2147483648"};
	int expected[8] = {0, 15, -25, 12345, 987654321, -34567, 2147483647, -2147483648};
	int i;
	int result;

	i = 0;
	while (i < 8)
	{
		result = ft_atoi(tests[i]);
		printf("%d = %d -> %d\n", expected[i], result, expected[i] == result);
		i++;
	}

	result = ft_atoi("\t\n\v\f\r +256");
	printf("%d = %d -> %d\n", 256, result, 256 == result);
	
	result = ft_atoi("256a999");
	printf("%d = %d -> %d\n", 256, result, 256 == result);

	result = ft_atoi("214748364712");
	printf("%d = %d -> %d\n", atoi("214748364712"), result, atoi("214748364712") == result);	

	result = ft_atoi("f21474");
	printf("%d = %d -> %d\n", atoi("f21474"), result, atoi("f21474") == result);

	result = ft_atoi("- 134");
	printf("%d = %d -> %d\n", atoi("- 134"), result, atoi("- 134") == result);

	result = ft_atoi("+-3");
	printf("%d = %d -> %d\n", atoi("+-3"), result, atoi("+-3") == result);

	result = ft_atoi("214748364712");
	printf("%d = %d -> %d\n", atoi("214748364712"), result, atoi("214748364712") == result);	

    result = ft_atoi(" -100000000000000");
    printf("%d = %d -> %d\n", atoi("-100000000000000"), result, atoi("-100000000000000") == result);

	return (0);
}
