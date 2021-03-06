/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 00:27:43 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/26 00:31:04 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		d;

	i = 0;
	size--;
	while (i < size)
	{
		d = tab[i];
		tab[i] = tab[size];
		tab[size] = d;
		i++;
		size--;
	}
}
