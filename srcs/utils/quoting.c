/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quoting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araiva <tsomsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:59:28 by araiva            #+#    #+#             */
/*   Updated: 2022/09/28 16:59:29 by araiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
/**
 * @brief single quote '' at start and end string
 * @return int 0 is false 1 is true
 */

int	is_sq_str(char	*s)
{
	int	len;

	if (*s != '\'')
		return (0);
	len = ft_strlen(s);
	if (s[len - 1] == '\'')
		return (1);
	else
		return (-1);
}

/**
 * @brief double quote "" at start and end string
 * @return int 0 is false 1 is true
 */
int	is_dq_str(char	*s)
{
	int	len;

	if (*s != '"')
		return (0);
	len = ft_strlen(s);
	if (s[len - 1] == '"')
		return (1);
	else
		return (-1);
}
