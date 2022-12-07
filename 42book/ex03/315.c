/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   315.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkohta <kkohta@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:24:18 by kkohta            #+#    #+#             */
/*   Updated: 2022/12/07 13:30:17 by kkohta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int	main(void)
{
	String name;
	printf("あなたの名前を入力してください。\n");
	scanf("%s", name);
	
	String ageStr;
	printf("あなたの年齢を入力してください。\n");
	scanf("%s", ageStr);

	int age = atoi (ageStr);
	printf("ようこそ、%d歳の%sさん\n", age, name);

	return (0);
}
