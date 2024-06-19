/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:42:00 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:42:00 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int main(void)
// {
// 	printf("%c\n", ft_tolower('-'));
// 	printf("%c\n", tolower('-'));
// 	return(0);
// }
