/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   74.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:40:08 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/08 14:44:41 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	srand((unsigned)time(NULL));
	enum {FIRE, WATER, WIND, EARTH};
	int gems[10];

	// 宝石をランダムに生成
	for (int i = 0; i < 10; i ++)
	{
		int gemType = rand() % 4;
		gems[i] = gemType;
	}
	return (0);
}
