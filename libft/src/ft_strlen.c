/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatolik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 16:44:28 by tkatolik          #+#    #+#             */
/*   Updated: 2019/05/15 23:27:13 by tkatolik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t			ft_strlen(const char *s)
{
	size_t		i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}