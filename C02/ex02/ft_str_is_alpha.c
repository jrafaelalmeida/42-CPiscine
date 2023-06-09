/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:59:03 by jpacheco          #+#    #+#             */
/*   Updated: 2023/03/16 16:09:24 by jpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
/*
int	main(void)
{
	int	is_alpha;
    char	a[] = "adasdadadad";
    is_alpha = ft_str_is_alpha(a);
    printf("%d\n", is_alpha);
}
*/