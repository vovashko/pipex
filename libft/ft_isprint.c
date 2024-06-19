/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:37:12 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:37:18 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_isprint(32));
//     printf("%d\n", isprint(32));
//     return (0);
// }