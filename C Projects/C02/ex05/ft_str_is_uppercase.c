/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiugur <hiugur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:36:12 by hiugur            #+#    #+#             */
/*   Updated: 2024/08/21 10:35:57 by hiugur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str [i] >= 'A' && str [i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
