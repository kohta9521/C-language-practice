/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   71.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:07:45 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 23:28:48 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	enum{FIRE, WATER, WIND, EARTH};

	// 宝石の属性をランダムで設定
	for (int i =0;i < 10; i ++)
	{
		int gemType = rand() % 4;
		switch (gemType)
		{
			case FIRE:
				printf("$");
				break;
			case WATER:
				printf("*");
				break;
			case WIND:
				printf("@");
				break;
			case EARTH:
				printf("#");
				break;
		}
		printf(" ");
	}
	return (0);
}
