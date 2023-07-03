/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:18:22 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/24 16:11:27 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_length(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

void	make_str(int size, char **strs, char *sep, char *new)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			new[k++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
			{
				new[k++] = sep[j++];
			}
		}
		i++;
	}
	new[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;
	int		j;
	int		k;
	int		new_len;

	i = 0;
	j = 0;
	k = 0;
	new_len = 0;
	while (i < size)
	{
		new_len += get_length(strs[i]);
		i++;
	}
	new_len += (size - 1) * get_length(sep);
	if (size <= 0)
		new_len = 1;
	new = (char *)malloc(sizeof(char) * new_len);
	if (size <= 0)
		return (new);
	make_str(size, strs, sep, new);
	return (new);
}

// int	main(void)
// {
// 	char *strs[] = {"Hello", "world", "my", "name", "is", "Rami"};
// 	char *sep = "@@@@@";
// 	int size = sizeof(strs) / sizeof(strs[0]);

// 	char *result = ft_strjoin(size, strs, sep);
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation error\n");
// 		return (1);
// 	}

// 	printf("Joined string: %s\n", result);

// 	free(result);

// 	return (0);
// }