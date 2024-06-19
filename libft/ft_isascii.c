/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:36:50 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:43:14 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i < 128)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_isascii(17));
//     printf("%d\n", isascii(17));
//     return (0);
// }