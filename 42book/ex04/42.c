/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:45:35 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 17:47:50 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int	main(void)
{
	bool doorClosed = true;
	while (doorClosed == true)
	{
		printf("ノックをする。\n");
		printf("1分待つ。\n");
	}
	return (0);
}
