/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:48:44 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/24 16:12:41 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char s[])
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!new)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int main()
// {
//     char *str = "Hello, World!";
//     int len = ft_strlen(str);
//     char *dup = ft_strdup(str);

//     printf("Length of the string: %d\n", len);
//     printf("Duplicated string: %s\n", dup);

//     free(dup);

//     return (0);
// }