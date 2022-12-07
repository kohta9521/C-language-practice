/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   45.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:56:45 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 18:01:00 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int	main(void)
{
	String anserNo;
	printf("かっこよくて最高な、C言語男子の名前は？？\n");
	printf("1:ミナト 2:ミサキ, 3:ツバキ 4:みさえ\n");
	scanf("%s", answerNo0);
	int n = atoi(anserNo);

	if (n == 2)
	{
		printf("大正解!! 見る目あるね!!!");
	} else {
		printf("残念\n");
	}
	return (0);
}
