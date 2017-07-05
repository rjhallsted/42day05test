	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex18.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 19:51:42 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 23:49:56 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ex18/ft_strlcat.c"

int		main(void)
{
	char test[256] = "";
	char rtest[256] = "";
	printf("%lu-", strlcat(rtest, "asdf", 16));
	printf("%d\n", ft_strlcat(test, "asdf", 16));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	printf("%lu-", strlcat(rtest, "asdf", 6));
	printf("%d\n", ft_strlcat(test, "asdf", 6));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	printf("%lu-", strlcat(rtest, "asdf", 4));
	printf("%d\n", ft_strlcat(test, "asdf", 4));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	printf("%lu-", strlcat(rtest, "", 16));
	printf("%d\n", ft_strlcat(test, "", 16));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	printf("%lu-", strlcat(rtest, "aseadfeae", 0));
	printf("%d\n", ft_strlcat(test, "aseadfeae", 0));
	printf("%s\n", rtest);
	printf("%s\n\n", test);
	return (0);
}
