/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiugur <hiugur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:44:23 by hiugur            #+#    #+#             */
/*   Updated: 2024/08/20 10:43:59 by hiugur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	exchng;

	i = 0;
	while (i < (size / 2))
	{
		exchng = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = exchng;
		i++;
	}
}
