/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:40:56 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/15 13:40:56 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	space;
	size_t	ind;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	space = size - dest_len - 1;
	ind = 0;
	while (src[ind] != '\0' && ind < space)
	{
		dest[dest_len + ind] = src[ind];
		ind++;
	}
	dest[dest_len + ind] = '\0';
	return (dest_len + src_len);
}

// int main(void) {
//     char dest[20] = "How the turn";
//     char src[] = "have tables!";

//     printf("%zu\n", ft_strlcat(dest, src, sizeof(dest)));

//     return (0);
// }
