/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:36:43 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:36:44 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90) || (i >= 48 && i <= 57))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     printf("%d\n", ft_isalnum(95));
//     printf("%d\n", isalnum(95));
//     return (0);
// }