/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 07:53:29 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/15 12:57:05 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int     main(void)
{
        printf("Index -1: %d (Attendu: -1)\n", ft_fibonacci(-1));
        printf("Index  0: %d (Attendu: 0)\n", ft_fibonacci(0));
        printf("Index  1: %d (Attendu: 1)\n", ft_fibonacci(1));
        printf("Index  2: %d (Attendu: 1)\n", ft_fibonacci(2));
        printf("Index  3: %d (Attendu: 2)\n", ft_fibonacci(3));
        printf("Index  4: %d (Attendu: 3)\n", ft_fibonacci(4));
        printf("Index  5: %d (Attendu: 5)\n", ft_fibonacci(5));
        return (0);
}*/
