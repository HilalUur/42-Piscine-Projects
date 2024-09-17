/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiugur <hiugur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:51:29 by hiugur            #+#    #+#             */
/*   Updated: 2024/08/19 10:49:15 by hiugur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// ft_putchar fonksiyonunun tanımı
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// test için main fonkunu yazacağım.
int	main(void)
{
	ft_putchar('A');
}
