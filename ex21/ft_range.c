/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 20:36:52 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/03 21:03:16 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *res;
	int i;

	if (min >= max)
		return (NULL);
	else
	{
		res = (int*)(malloc(sizeof(int) * (max - min)));
		if (res == NULL)
			return (NULL);
		else
		{
			i = 0;
			while (min < max)
			{
				res[i] = min;
				min++;
				i++;
			}
		}
	}
	return (res);
}
