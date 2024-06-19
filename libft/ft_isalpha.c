/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:36:46 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:36:47 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_isalpha(95));
//     printf("%d\n", isalpha(95));
//     return (0);
// }