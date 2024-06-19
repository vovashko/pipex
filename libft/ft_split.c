/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: vshkonda <vshkonda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 12:33:35 by vshkonda      #+#    #+#                 */
/*   Updated: 2023/12/11 17:03:12 by vshkonda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_array(char **strings, size_t ind)
{
	while (ind > 0)
	{
		ind--;
		free(strings[ind]);
	}
	free(strings);
}

static int	count_substr(const char *s, char c)
{
	int	count;
	int	in_sub;

	if (s == NULL)
		return (0);
	count = 0;
	in_sub = 0;
	while (*s)
	{
		if (*s == c)
			in_sub = 0;
		else if (!in_sub)
		{
			in_sub = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	len_substr(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

static char	**get_str_array(char const *s, char c, char **array, size_t num_sub)
{
	size_t	ind_arr;
	size_t	ind_str;

	ind_arr = 0;
	ind_str = 0;
	while (ind_arr < num_sub)
	{
		while (s[ind_str] && s[ind_str] == c)
			ind_str++;
		array[ind_arr] = ft_substr(s, ind_str, len_substr(&s[ind_str], c));
		if (!(array[ind_arr]))
		{
			free_array(array, ind_arr);
			return (NULL);
		}
		while (s[ind_str] && s[ind_str] != c)
			ind_str++;
		ind_arr++;
	}
	array[ind_arr] = NULL;
	return (array);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	subs;

	if (!s)
		return (NULL);
	subs = count_substr(s, c);
	result = (char **)malloc((subs + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = get_str_array(s, c, result, subs);
	return (result);
}
