/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putendl_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slatchma <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/22 20:31:43 by slatchma     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/22 20:31:44 by slatchma    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
