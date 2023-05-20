/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouchaf <ibouchaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 08:16:03 by ibouchaf          #+#    #+#             */
/*   Updated: 2023/04/29 08:29:55 by ibouchaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_pwd(void)
{
	char	*buffer = getcwd(NULL, 1024);
	if (buffer == NULL)
	{
		if (errno == ERANGE)
			printf("Path exceeds max buffer lenght\n");
		else if (errno == ENOMEM)
			printf("Memory cannot be alocated");
	}
	else
		printf("%s\n", buffer);
}
