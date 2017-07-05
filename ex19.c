/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex19.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:58:25 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/04 00:21:36 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex19/ft_strlcpy.c"
#include <string.h>

int		main(void)
{
	char test[256] = "";
	char rtest[256] = "";
	printf("%lu-", strlcpy(rtest, "asdf", 16));
	printf("%d\n", ft_strlcpy(test, "asdf", 16));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	printf("%lu-", strlcpy(rtest, "uiop", 0));
	printf("%d\n", ft_strlcpy(test, "uiop", 0));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	printf("%lu-", strlcpy(rtest, "qwerty", 4));
	printf("%d\n", ft_strlcpy(test, "qwerty", 4));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	printf("%lu-", strlcpy(rtest, "", 4));
	printf("%d\n", ft_strlcpy(test, "", 4));
	printf("%s\n\n", rtest);
	printf("%s\n", test);
}
