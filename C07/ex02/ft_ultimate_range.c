/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:58:39 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/24 16:11:37 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (range == 0)
	{
		return (-1);
	}
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*new;
// 	int	range;

// 	min = 5;
// 	max = 10;
// 	range = ft_ultimate_range(&new, min, max);
// 	printf("%d\n", range);
// 	if (range == -1)
// 	{
// 		printf("Memory allocation error\n");
// 		return (1);
// 	}
// 	else if (range == 0)
// 	{
// 		printf("Empty range\n");
// 		return (1);
// 	}
// 	for (int i = 0; i < range; i++)
// 	{
// 		printf("%d, ", new[i]);
// 	}
// 	free(new);
// 	return (0);
// }
