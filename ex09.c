/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhallste <rhallste@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:45:03 by rhallste          #+#    #+#             */
/*   Updated: 2017/07/03 16:45:50 by rhallste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex09/ft_strlowcase.c"

int		main(void)
{
	char str[] = "asd3f qeeRtY!- ZXCV";
	printf("%s", ft_strlowcase(str));
}
