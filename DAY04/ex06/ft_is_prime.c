/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 07:28:37 by ael-mena          #+#    #+#             */
/*   Updated: 2018/07/26 07:32:25 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int count;

	count = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	while (count < nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}
