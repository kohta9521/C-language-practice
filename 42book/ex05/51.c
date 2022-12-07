/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   51.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:03:54 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 18:19:39 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	printf("あなたの運勢を占います。\n");
	puts("↓結果↓");
	srand((unsigned)time(NULL));
	int fortune = rand() % 4 + 1;

	if (fortune == 1)
	{
		printf( "大吉\n");
	} else if (fortune == 2) {
		printf(" 中吉\n");
	} else if (fortune == 3) {
		printf(" 吉\n");
	} else {
		printf(" 凶\n");
	}
	puts("今日も一日頑張っていきましょう!!!!");
	return (0);
}
