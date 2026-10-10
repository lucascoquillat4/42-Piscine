/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 07:52:27 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/15 12:24:55 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*int	main(void)
{
	printf("Factorielle de 5: %d (Attendu: 120)\n", ft_iterative_factorial(5));
	printf("Factorielle de 0: %d (Attendu: 1)\n", ft_iterative_factorial(0));
	printf("Factorielle de -5: %d (Attendu: 0)\n", ft_iterative_factorial(-5));
	return (0);
}*/
