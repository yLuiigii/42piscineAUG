/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:51:11 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/23 18:23:05 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	ac = 0;
	while (av[0][i] != '\0')
		i++;
	write(1, av[0], i);
	write(1, "\n", 1);
}