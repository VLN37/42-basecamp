/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 08:50:55 by jofelipe          #+#    #+#             */
/*   Updated: 2021/06/10 11:46:44 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//swaps the value inside the addresses of two pointers
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
