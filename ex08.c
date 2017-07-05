/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:38:32 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 16:40:35 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex08/ft_strupcase.c"

int		main(void)
{
	char str[] = "a23sdf qWeRtY ZXCV ---214!";
	printf("%s", ft_strupcase(str));
	return (0);
}
