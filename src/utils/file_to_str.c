/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclarice <cclarice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 21:38:08 by cclarice          #+#    #+#             */
/*   Updated: 2021/03/15 21:33:33 by cclarice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

char	*file_to_str(char *file, int size)
{
	int		n;
	char	*str;

	if (size == -1 || !(str = malloc(sizeof(char) * size)))
		exit((ft_printf("Error\n Malloc Error!")) * 0);
	if ((n = open(file, O_RDONLY)) == -1)
		return (NULL);
	str[(read(n, str, size))] = '\0';
	close(n);
	return (str);
}
