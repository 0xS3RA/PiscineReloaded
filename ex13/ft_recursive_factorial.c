/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:41:03 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/11 10:08:54 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

//int	main(void)
//{
//	printf("%i\n", ft_iterative_factorial(0));
//	printf("%i\n", ft_iterative_factorial(1));
//	printf("%i\n", ft_iterative_factorial(2));
//	printf("%i\n", ft_iterative_factorial(3));
//	return (0);
//}
