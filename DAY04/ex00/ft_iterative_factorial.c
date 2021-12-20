/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 23:07:43 by ael-mena          #+#    #+#             */
/*   Updated: 2018/07/26 03:58:41 by ael-mena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 13)
		return (0);
	i = nb;
	while (i >= 2)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
