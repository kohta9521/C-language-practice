/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:14:18 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/11 13:16:26 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("整数を入力してください : ");
	scang("%d", &no);

	printf("%dに13を加えると", no);
	printf("%dです。\n", no + 13);

	return (0);
}
