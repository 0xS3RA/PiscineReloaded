/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:26:13 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/10 16:38:40 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	res = 0;
	if (min >= max)
		return (res);
	res = malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

//int	main(void)
//{
//	int	min = 23;
//	int	max = 46;
//	int	*range = ft_range(min, max);
//	int	len = max - min;
//	int	i = 0;
//	while (i < len)
//		printf("%i\n", range[i++]);
//}
