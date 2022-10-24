/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:30:14 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/08 21:13:48 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//if input is upper care, returns it in lowercase
int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}
