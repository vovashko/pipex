/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 13:37:28 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/10/23 12:23:41 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(long int num)
{
	size_t	count;

	count = 0;
	if (num == 0)
		count = 1;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	long int	num;

	num = n;
	i = digits(n);
	if (n < 0)
	{
		num = -num;
		i++;
	}
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		str[i - 1] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int main(void)
// {
//     printf("%s\n", ft_itoa(0));
//     return(0);
// }