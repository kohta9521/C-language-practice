/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 23:34:35 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/02 23:42:47 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int countfunc(void);

int main(void)
{
	countfunc();
	countfunc();
	countfunc();
	return(0);
}

int countfunc(void)
{
	int count = 0;
	count++;
	printf("%d\n", count);
	return count;
}
