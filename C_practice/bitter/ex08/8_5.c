/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 07:26:02 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/02 07:28:21 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int no;
	scanf("%d", &no);
	
	switch (no) {
	case1:
		printf("野比のび太\n");
		break;
	case 2:
		printf("源静香\n");
		break;
	case 3:
		printf("剛田武\n");
		break;
	case 4:
		printf("骨川スネ夫\n");
		break;
	}
	return (0);
}
