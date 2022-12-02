/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_7.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 07:31:03 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/02 07:33:02 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int no;
	scanf("%d", &no);
	switch(no) {
	case 1:
	case 3:
	case 4:
		printf("男性\n");
		break;
	case 2:
		printf("女性\n");
		break;
	default:
		printf("そんな番号の人はいない\n");
		break;
	}
	return (0);
}
