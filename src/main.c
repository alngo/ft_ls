/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngo <alngo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:14:29 by alngo             #+#    #+#             */
/*   Updated: 2019/09/18 15:01:59 by alngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	printf("sizeof unsigned int: %lu", sizeof(unsigned int));
	ft_printf("%c - %c - %c - %c - %c\n", 'a', 'b', 'c', 'd', 'e');
	ft_printf("%C - %C - %C - %C - %C\n", 044, 0242, 004471, 020254, 0201510);
	ft_printf("%s\n", "coucou");
	ft_printf("%10.3s\n", "coucou");
	return (1);
}
