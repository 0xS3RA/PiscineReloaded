/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:40:54 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/11 10:09:03 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	i = nb - 1;
	while (i > 0)
		nb = nb * i--;
	return (nb);
}

//int	main(void)
//{
//	printf("%i\n", ft_iterative_factorial(0));
//	printf("%i\n", ft_iterative_factorial(1));
//	printf("%i\n", ft_iterative_factorial(2));
//	printf("%i\n", ft_iterative_factorial(3));
//	return (0);
//}
