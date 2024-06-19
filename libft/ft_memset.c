/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:39:40 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:39:41 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

// int main(void)
// {
//     char dest[50] = "fsadsdasadssd";
//     char ch = 'v';
//     size_t res;
//     res = strlen(dest);
//     printf("%s\n", (char *)memset(dest, ch, res));
//     printf("%s\n", (char *)ft_memset(dest, ch, res));
//     return(0);
// }