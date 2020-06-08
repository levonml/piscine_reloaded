/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 11:58:33 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/03 12:11:03 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (nb > 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
