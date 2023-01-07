/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogozturk <ogozturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:12:04 by ogozturk          #+#    #+#             */
/*   Updated: 2022/10/30 16:33:35 by ogozturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s) //Uzunluk alıyoruz.
{
	size_t	c;

	c = 0;
	while (s[c] != 0)
		c++;
	return (c);
}
