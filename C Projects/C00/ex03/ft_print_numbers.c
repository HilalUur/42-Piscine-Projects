/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiugur <hiugur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:47:28 by hiugur            #+#    #+#             */
/*   Updated: 2024/08/19 10:53:11 by hiugur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	c;

	number = 0;
	while (number <= 9)
	{
		c = number + '0';
		write(1, &c, 1);
		number++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
