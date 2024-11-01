/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlitvino <mlitvino@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:31:21 by mlitvino          #+#    #+#             */
/*   Updated: 2024/10/31 17:27:41 by mlitvino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	if (32 <= a && a <= 127)
		return (1);
	else
		return (0);
}