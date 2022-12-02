/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 08:24:29 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/02 08:26:11 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	sum(int, int);

int main(void)
{
	int value;
	value = sum(50, 100);
	printf("%d\n", value);
	return (0);
}

int	sum(int min, int max)
{
	int num;
	num = (min + max) * (max - min + 1) / 2;
	return (num);
}
