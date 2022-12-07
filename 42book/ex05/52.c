/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   52.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:21:33 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 18:25:26 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	printf("あなたの今日の運勢を占います。\n");
	srand((unsigned)time(NULL));
	int fortune = rand() % 4 + 1;

	switch (fortune)
	{
		case 1:
			printf("大吉\n");
			break;
		case 2:
			printf("中吉\n");
			break;
		case 3:
			printf("吉\n");
			break;
		default:
			printf("凶\n");
	}
	return (0);
}	
