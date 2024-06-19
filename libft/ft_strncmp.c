/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:41:20 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/20 14:24:21 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
// int main (void)

// {
//     char *text1;
//     char *text2;
//     int n;

//     text1 = "Bigger";
//     text2 = "Biggur";
//     n = 5;

//     printf ("%d\n", ft_strncmp(text1, text2, n));
//     return(0);
// }