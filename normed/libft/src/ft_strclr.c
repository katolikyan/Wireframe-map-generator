/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatolik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:21:05 by tkatolik          #+#    #+#             */
/*   Updated: 2019/05/15 23:27:10 by tkatolik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void			ft_strclr(char *s)
{
	if (s && *s)
		ft_bzero(s, ft_strlen(s));
}