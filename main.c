/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 16:18:56 by smamba            #+#    #+#             */
/*   Updated: 2016/08/10 16:57:09 by smamba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tracer.h"

int		main(void)
{
	t_interface	iapp;

	iapp = init_tracer();
	iapp.camera = new_camera(new_vec3f(0, 0, 0),
							new_vec3f(0, 0, 0),
							new_vec3f(0, 0, -1), 30);
	run_application(&iapp);
	return (0);
}
