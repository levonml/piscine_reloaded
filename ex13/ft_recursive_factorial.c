/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 12:34:18 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/03 12:35:46 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb >= 13)
		fact = 0;
	else if (nb > 0)
		fact = nb * ft_recursive_factorial(nb - 1);
	return (fact);
}
