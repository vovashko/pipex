/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:42:05 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:42:08 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// int main(void)
// {
// 	printf("%c\n", ft_toupper('c'));
// 	printf("%c\n", toupper('c'));
// 	return(0);
// }