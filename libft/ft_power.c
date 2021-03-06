/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liabanzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 20:39:12 by liabanzh          #+#    #+#             */
/*   Updated: 2016/12/09 20:39:13 by liabanzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int number, int power)
{
	int res;

	res = number;
	while (power > 1)
	{
		res *= number;
		power--;
	}
	return (res);
}
