/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:36:33 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:36:35 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *)s;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char dest[50];

//     printf("%s\n", (char *)bzero(dest, 15));
//     printf("%s\n", (char *)ft_bzero(dest, 15));
//     return(0);
// }