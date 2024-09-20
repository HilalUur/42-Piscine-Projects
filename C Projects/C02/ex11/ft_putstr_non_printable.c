/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiugur <hiugur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:05:05 by hiugur            #+#    #+#             */
/*   Updated: 2024/08/22 20:16:54 by hiugur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str [i] >= 32 && str [i] <= 126))
		{
			write (1, &str[i], 1);
		}
		else
		{
			write (1, "\\", 1);
			write (1, &"0123456789abcdef"[(unsigned char)str[i] / 16], 1);
			write (1, &"0123456789abcdef"[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}
int main(void)
{
	char str[]="Coucou\ttu vas bien ?";
	ft_putstr_non_printable(str);
}