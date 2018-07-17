/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_pow_int.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amatthys <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 13:30:57 by amatthys     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 20:29:41 by amatthys    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow_int(int c, size_t pow)
{
	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (c);
	else
		return (c * ft_pow_int(c, pow - 1));
}