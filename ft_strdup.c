/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pherranz <pherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:23:05 by pherranz          #+#    #+#             */
/*   Updated: 2020/11/05 10:59:32 by pherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*aux;
	size_t		len;

	len = ft_strlen(s1) + 1;
	if (!(aux = malloc(len)))
		return (NULL);
	ft_memcpy(aux, s1, len);
	return (aux);
}
