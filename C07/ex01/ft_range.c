/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:28:53 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/24 16:11:43 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*new;

	i = 0;
	if (min >= max)
	{
		new = NULL;
		return (new);
	}
	else
	{
		range = max - min;
		new = (int *)malloc(sizeof(int) * range);
		if (!new)
		{
			return (NULL);
		}
		while (i < range)
		{
			new[i] = min + i;
			i++;
		}
		return (new);
	}
}

// int	main(void)
// {
// 	int min;
// 	int max;
// 	int *new;
// 	int i = 0;
// 	int range;

// 	min = 11;
// 	max = 10;
// 	range = max - min;
// 	new = ft_range(min, max);
// 	while (i < range)
// 	{
// 		printf("%d, ", new[i]);
// 		i++;
// 	}
// }