/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngo <alngo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:14:29 by alngo             #+#    #+#             */
/*   Updated: 2019/09/18 10:49:48 by alngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	ft_printf("%c - %c - %c - %c - %c\n", 'a', 'b', 'c', 'd', 'e');
	ft_printf("%C - %C - %C - %C - %C\n", "$", "¢", "ह", "€", "𐍈");
	return (1);
}
