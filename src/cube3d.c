/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclarice <cclarice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:33:10 by cclarice          #+#    #+#             */
/*   Updated: 2021/03/16 03:22:55 by cclarice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

int		main(int c, char **v)
{
	t_map	m;

	m = init_map();
	if (check_dotcub(v[1]))
		return (0);
	if (c >= 2 && (m.cub = file_to_str(v[1], get_file_size(v[1]))))
	{
		if (c >= 3 && ft_strstr(v[2], "--save"))
			m.vr.mode = 2;
		else
			m.vr.mode = 0;
		if (vld(m.cub, &m.map, &m.pt, &m.vr))
			initialization(m.pt, m.vr, m.map);
	}
	else
		return ((ft_printf("Error\n\033[31mMap is not found!\n")) * 0);
	free(m.cub);
	return ((ft_printf("\033[92mSuccesful End \U0001f918\n")) * 0);
}
