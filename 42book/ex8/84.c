/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   84.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:10:00 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/09 16:12:26 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	funcA(void);
void	funcB(void);

int	main(void)
{
	funcA();
	return (0);
}

void	funcA(void)
{
	printf("関数Aです！！！\n");
	funcB();
}

void	funcB(void)
{
	printf("関数Bです!!!\n");
}
