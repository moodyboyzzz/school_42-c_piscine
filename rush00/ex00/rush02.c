/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:01:06 by ctommy            #+#    #+#             */
/*   Updated: 2021/06/27 15:01:02 by ctommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printr(char start, char middle, char end, int length)
{
	int	i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i < length)
			ft_putchar(middle);
		else if (i == length)
			ft_putchar(end);
		if (i == 2147483647)
			break ;
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			printr('A', 'B', 'A', x);
		else if (i < y)
			printr('B', ' ', 'B', x);
		else if (i == y)
			printr('C', 'B', 'C', x);
		ft_putchar('\n');
		if (i == 2147483647)
			break ;
		i++;
	}
}
