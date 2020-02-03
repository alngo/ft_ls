/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alngo <alngo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 16:50:42 by alngo             #+#    #+#             */
/*   Updated: 2019/06/03 14:25:14 by alngo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_type.h"

int		ft_isgraph(int c)
{
	return ((ft_ctype(c) & (DI | LO | PU | UP | XA)) ? 1 : 0);
}
