/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:05:58 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/17 12:28:27 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combchar2(char a, char space, char b)
{
	write(1, &"0123456789"[a / 10], 1);
	write(1, &"0123456789"[a % 10], 1);
	write(1, &space, 1);
	write(1, &"0123456789"[b / 10], 1);
	write(1, &"0123456789"[b % 10], 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 1);
}

void	printcomb2(void)
{
	char	a;
	char	b;
	char	space;

	space = ' ';
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			combchar2(a, space, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	printcomb2();
	return (0);
}
