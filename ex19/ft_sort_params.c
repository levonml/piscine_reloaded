/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstepany <lstepany@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 15:26:57 by lstepany          #+#    #+#             */
/*   Updated: 2020/06/03 17:55:02 by lstepany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i])
		return (-s2[i]);
	if (s1[i])
		return (s1[i]);
	return (0);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < argc)
	{
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[j + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		j = i + 1;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int k;

	k = 1;
	ft_sort(argc, argv);
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putstr("\n");
		k++;
	}
	return (0);
}
