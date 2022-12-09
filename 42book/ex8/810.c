/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   810.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:32:41 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/09 17:36:58 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	add(int x, int y)
{
	int ans = x + y;
	return ans;
}

int	main(void)
{
	int year = 2022;
	int ans1;
	ans1 = add(year, 4);
	printf("%d年の%d年後は、%d年です!!\n", year, 4, ans1);

	int ans2 = add(year, 50);
	printf("%d年は%d年の%d年後です!!!!!\n", year, 50, ans2);

	return (0);
}
