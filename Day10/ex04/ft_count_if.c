/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 06:13:49 by ahel-men          #+#    #+#             */
/*   Updated: 2019/01/30 06:13:52 by ahel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if ((f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}
