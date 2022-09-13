/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:29:00 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/12 20:30:26 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	while ((str) && (n > 0))
	{
		if ((*(unsigned char *)str) == (unsigned char)ch)
			return ((void *)str);
		n--;
		str++;
	}
	return (0);
}
