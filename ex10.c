/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:02:34 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 17:07:02 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex10/ft_strcapitalize.c"

int		main(void)
{
	char str[] = "asdf qWeRtY ZXCV 100tis";
	printf("%s\n", ft_strcapitalize(str));

	char str1[] = "asdf/qWeRtY-ZXCV+100tis";
	printf("%s\n", ft_strcapitalize(str1));
	return (0);
}
