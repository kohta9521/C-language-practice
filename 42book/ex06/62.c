/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   62.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:54:32 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 19:02:05 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef char String[1024];

int	main(void)
{
	typedef struct
	{
		String name;
		int hp;
		int attack;
	} MONSTER;

	MONSTER seiryu = {"青龍", 80, 15};
	MONSTER suzaku = {"朱雀", 100, 30};
	MONSTER byakko = {"白虎", 100, 20};
	MONSTER genbu = {"玄武", 120, 10};

	const String TEMPLATE = "%s : HP=%3d 攻撃力=%2d\n";
	printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);



	return (0);
}
