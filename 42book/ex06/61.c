/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   61.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:44:23 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 18:53:26 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef char String[1024];

int	main(void)
{
	struct MONSTER
	{
		String name;
		int hp;
		int attack;
	};

	struct MONSTER seiryu;
	struct MONSTER suzaku;
	struct MONSTER byakko;
	struct MONSTER genbu;

	return (0);
}
