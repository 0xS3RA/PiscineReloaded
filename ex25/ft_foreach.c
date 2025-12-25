/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvan-ach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:37:39 by vvan-ach          #+#    #+#             */
/*   Updated: 2025/12/10 17:43:13 by vvan-ach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

//void	ft_putnbr(int	i)
//{
//	printf("%i\n", i);
//}
//
//int	main(void)
//{
//	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
//	ft_foreach(tab, 8, &ft_putnbr);
//	return (0);
//}
