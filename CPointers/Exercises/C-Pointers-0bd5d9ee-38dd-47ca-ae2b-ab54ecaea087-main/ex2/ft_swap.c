/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:30:38 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/22 10:23:01 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	nb;

	nb = *a;
	*a = *b;
	*b = nb;
}

/*int	main(void)
{
	int	a;
	int	b;
	char		char_a;
	char		char_b;

	a = 4;
	b = 2;
	char_a = a + '0';
	char_b = b + '0';
	write(1, &char_a, 1);
	write(1, &char_b, 1);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	char_a = a + '0';
	char_b = b + '0';
	write(1, &char_a, 1);
	write(1, &char_b, 1);
	write(1, "\n", 1);
	return (0);
}*/
